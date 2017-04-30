The crashproof_parameters.csv contains list of parameters with its description, typical values and relation ships with other parameters.


How to run crash proof drone.

1. Get the drone working (or working drone) with rangefinder installed, configured and rangefinder tilt compensation set to true.
2. Load firmware by using make px4-v2-hexa-upload or make px4-v2-uplod  from ardupilot/ArduCopter directory
3. set channel 5 RC switch to set mode ALT_HOLD when you want to enable crash proof mode
4. Enable crash proof mode by channel 5 switch
5. tune CP_MIN_ALT and PILOT_VEL_Z_MAX parameter when flying on ground.  
6. Try to crash it when flying on lake :) 



