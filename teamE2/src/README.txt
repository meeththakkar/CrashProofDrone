the ardupilot.tar.gz contains code for Ardupilot. 
It is also available at following link in this commit state:
https://github.com/meeththakkar/ardupilot/tree/Copter-3.4.5.crashproof-RELEASE


The only files we have changed / modified are as following


Tools/autotest/sim_vehicle.py 
-  add line to automatically load Joystick module



 ArduCopter/flight_mode.cpp 
- added crashproof modes  ( crash_proof and crash_proof_stabilize) init and run method calls.


ArduCopter/defines.h
-added Internal variables for Crash_proof states and Assigned flight mode numbers to two flight modes.



 ArduCopter/control_crash_proof_stabilize.cpp
- Stabilize mode derivation of crash proof mode (This mode works in simulation but not in real life ) 



 ArduCopter/control_crash_proof.cpp
- ALT_HOLD mode derivation of crash proof mode ( This works in simulation, it should work in real life but seems we have not replicated alt_hold mode correctly )



 ArduCopter/control_althold.cpp
- ALT_HOLD mode is now crash proof mode when CP_MIN_ALT is set above 0 
 



ArduCopter/Parameters.h and  ArduCopter/Parameters.cpp
- added following parameters 
+    AP_Float cp_pid_p;
+    AP_Float cp_pid_i;
+    AP_Float cp_pid_d;
+    AP_Float cp_min_alt;
+    AP_Float cp_max_accel;
+    AP_Float cp_pid_base;


ArduCopter/Copter.h
- added crash_proof_stabilize_state variable which tracks internal state of drone in crash_proof_stabilize mode
added declaration of run and init methods for both modes crash_proof and crash_proof_stabilize




