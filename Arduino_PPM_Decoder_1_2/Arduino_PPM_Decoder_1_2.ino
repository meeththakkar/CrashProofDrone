/*
 * 
 * 50Hz Sanoking rate.. 
  Arduino PPM Decoder 1.2
  This sketch decodes PPM signals from an RC receiver. Input should be in the form of a PPM Stream
  Outputs are scaled to 1-100 and then printed to the Serial Monitor

  For details on using this sketch see link below
  http://projectsfromtech.blogspot.com/2013/11/arduino-ppm-decoder-decoding-rc.html
  For details on building a PPM Encoder to create an Arduino readable PPM stream see link below
  http://projectsfromtech.blogspot.com/2013/11/homemade-ppm-encoder.html


  Last edited: 11/16/2013
  Matthew
  http://projectsfromtech.blogspot.com/

*/


const int NumberOfChannels = 6;          // Change to match number of channels
const byte InputPin = 3;                // Pin associated with interrupt 2 on Arduino Mega2560
const int FrameSpace = 2000;   // 8 ms


volatile long Current_Time;
volatile long Last_Spike;

volatile byte Current_Channel = 0;
volatile long Spike_Length[NumberOfChannels + 1];
volatile int LastChannelFlag = false;



void setup()
{
  delay(100);
  attachInterrupt( 1, Spike, RISING);
  Current_Time = micros();
  Last_Spike = 0;
  Serial.begin(115200);
  Serial.println("Setup????");
}


void loop()
{

  if (LastChannelFlag == true)   // If we are on the last Spike
  {
    LastChannel();               // Get the last pulse value
    Display();                   // Display all channels on the Serial Monitor
  }

}  //end loop()



//Stores the length of the spike in Spike_Length. Framespace length in stored in SpikeLength[0]
void Spike()
{

  Last_Spike = Current_Time;
  Current_Time = micros();
  long len = Current_Time - Last_Spike;
  
  if (len > FrameSpace){ 
    Current_Channel = 0;
    Spike_Length[Current_Channel] = len;
  //  Serial.println(len);
    
    }       // oops, you were actually in the frame space --- need to add correction
else{
  Current_Channel = Current_Channel + 1;                 // Reading the next channel now
  Spike_Length[Current_Channel] = len;
    
  if (Current_Channel == NumberOfChannels)                              // Special case. Must wait for it to fall manually.
  {
    LastChannelFlag = true;
    Current_Channel = 0;
  }
}
}  // end Spike()



void LastChannel()
{
  LastChannelFlag = false;
}


// Prints values to Serial Monitor
void Display()
{
  for ( byte x = 1; x <= NumberOfChannels; x++)
  {
    if(x > 1){
    Serial.print(",");      // Mapping values may need to be changed depending on receiver
    }
    
    Serial.print(Spike_Length[x]);
  }
  Serial.println();
  
 
}

