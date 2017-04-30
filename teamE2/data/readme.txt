
Commands to activate the graphs

>module load graph
>graph RANGEFINDER.distance
>graph SERVO_OUTPUT_RAW.servo1_raw


Description of the graph data

altitude_graph.png 

	altitude measurement vs time of the drone in simulation. Data contains information about altitude range in normal/stabilize mode(1) and crash proof mode(2). The first peak is the behavior of the drone in normal mode while the second half is the behavior of the drone in crash proof mode. In this simulation the threshold/hover altitude is set to .65 meters. 


servopower_graph.png

	shows power value in servo motor vs time. The y axis should be treated more as a percentage as the value 1200 represents 0% power while 1900 represents 100% power. Once again the data shows drone behavior in normal/stabilize mode(1) and crash proof mode(2). The main focus point of this graph is in scenario 2 where the drone automatically increases power in servo motor to increase thrust as it gets close to crash zone.  