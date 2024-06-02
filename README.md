This is our final code from assignment 2 of compsys 723. 

Report can be found here: add link 

To run application open in Linux.
Terminal commands: 
  cd /Desktop/a2723/assignment2/files <br />
  make cruiseregulation.xes <br />
  ./cruiseregulation.xes <br />

Inputs: 
1) On (pure): Enable the cruise control. 

2) Off (pure): Disable the cruise control. 

3) Resume (pure): Resume the cruise control after braking. 

4) Set (pure): Set the current speed as the new cruise speed. 

5) QuickDecel (pure): Decrease the cruise speed. 

6) QuickAccel (pure): Increase the cruise speed. 

7) Accel (float): Accelerator pedal sensor. 

8) Brake (float): Brake pedal sensor. 

9) Speed (float): Car speed sensor.

Outputs: 
1) CruiseSpeed (float): Cruise speed value  

2) ThrottleCmd (float): Throttle command  

3) CruiseState (enumeration): State of the cruise control. It can be one of: OFF, ON, STDBY or DISABLE.

For more explanation please find report pdf. 
