the firmware.elf file is firmware used for Pixhawk V2.

upload this file to pixhawk.


Command to build this on your own environemnt
cd ~/ardupilot/ArduCopter
make px4-v2-hexa


last few lines of output of aboce command should indicate the location of binary files


LINK:    /home/meet/ardupilot/modules/PX4Firmware/Build/px4fmu-v2_APM.build/firmware.elf
BIN:     /home/meet/ardupilot/modules/PX4Firmware/Build/px4fmu-v2_APM.build/firmware.bin
%% Generating /home/meet/ardupilot/modules/PX4Firmware/Build/px4fmu-v2_APM.build/firmware.px4
make[2]: Leaving directory '/home/meet/ardupilot/modules/PX4Firmware/Build/px4fmu-v2_APM.build'
%% Copying /home/meet/ardupilot/modules/PX4Firmware/Images/px4fmu-v2_APM.px4
make[1]: Leaving directory '/home/meet/ardupilot'
   text	   data	    bss	    dec	    hex	filename
 955300	   2848	  61276	1019424	  f8e20	/home/meet/ardupilot/modules/PX4Firmware/Build/px4fmu-v2_APM.build/firmware.elf
PX4 ArduCopter Firmware is in ArduCopter-v2.px4




Command to upload this firmware 
make mx4-v2-hexa-upload

Get more information here about building ardupilot : http://ardupilot.org/dev/docs/building-px4-for-linux-with-make.html

