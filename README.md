# CrashProofDrone
Crash Proof Drone 


the brach which we are using is at https://github.com/meeththakkar/ardupilot/commits/Copter-3.4.5.crashproof

Setup.

  http://ardupilot.org/dev/docs/setting-up-sitl-on-linux.html#setting-up-sitl-on-linux

RUN SIMULATOR... 

export PATH=$PATH:$HOME/jsbsim/src
export PATH=$PATH:$HOME/ardupilot/Tools/autotest
export PATH=/usr/lib/ccache:$PATH
. ~/.bashrc
cd ardupilot/ArduCopter/
sim_vehicle.py -j4 -L KSFO --console -f hexa




  sudo apt-get install python-matplotlib python-serial python-wxgtk2.8 python-wxtools python-lxml
export PATH=$PATH:$HOME/jsbsim/src
export PATH=$PATH:$HOME/ardupilot/Tools/autotest
export PATH=/usr/lib/ccache:$PATH
. ~/.bashrc
    cd ..
    cd ardupilot/ArduPlane
    sim_vehicle.py -w
    sim_vehicle.py --console --map --aircraft test
    sudo sim_vehicle.py --console --map --aircraft test
    sudo apt-get install flightgear
  
  
  export PATH=$PATH:$HOME/jsbsim/src
  export PATH=$PATH:$HOME/ardupilot/Tools/autotest
  export PATH=/usr/lib/ccache:$PATH
  . ~/.bashrc
  cd ardupilot/ArduCopter/
  sim_vehicle.py -j4 -L KSFO --console



RUN VISUALIZATION

  export PATH=$PATH:$HOME/jsbsim/src
  export PATH=$PATH:$HOME/ardupilot/Tools/autotest
  export PATH=/usr/lib/ccache:$PATH
  . ~/.bashrc
  cd /ardupilot/Tools/autotest/
  cd ~/ardupilot/Tools/autotest/
  fg_quad_view.sh





Joystick integration
https://pingus.seul.org/~grumbel/jstest-gtk/
Jstest-gtk

pip install pyyaml


git clone https://github.com/ArduPilot/MAVProxy.git
 pip uninstall mavproxy
 sudo pip uninstall mavproxy
  cd -
  cd ./MAVProxy/
   ls
   python setup.py install
   sudo python setup.py install
   python -m MAVProxy.modules.mavproxy_joystick.findjoy
  cd MAVProxy
   python -m MAVProxy.modules.mavproxy_joystick.findjoy
   cd ..
   python -m MAVProxy.modules.mavproxy_joystick.findjoy
   pip install ymal
   sudo pip install ymal
   sudo pip install yaml
   cd MAVProxy/modules/mavproxy_joystick/
   ls
   python findjoy.py
   ls
   python controls.py
   python findjoy.py
   cd ..
   python setup.py install
   cd ..
   python setup.py install
   sudo python setup.py install
   sudo pip uninstall MAVProxy
   sudo pip uninstall mavproxy
   sudo python setup.py install
   sudo pip install yaml
   sudo -H pip install yaml
   cd MAVProxy/modules/mavproxy_joystick/
   python findjoy.py
   sudo pip install pyyaml
   history


Repos I edited
~/MAVProxy/
Ardupilot



do load param my_may.param once 
use rc 5 1000 for stabilize 
use rc 5 1600 for mode 21 ( crash proof mode) 


Arduino Delay Library 
http://www.forward.com.au/pfod/ArduinoProgramming/TimingDelaysInArduino.html


Meet Commands.

http://askubuntu.com/questions/66070/how-to-set-windows-bootloader-as-default-bootloader

Resolve atheros network issue.
sudo su
echo "options ath9k nohwcrypt=1" >> /etc/modprobe.d/ath9k.conf



