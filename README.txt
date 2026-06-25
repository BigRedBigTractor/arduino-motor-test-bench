Project: Arduino DC Motor Test Bench with Limit Switch and Ultrasonic Sensor Integration

Overview:
This project is a small electromechanical motor control test bench to explore the basic concepts behind mechatronics. This project uses an Arduino Uno to control a DC gear motor through an L298N motor driver, which allows for speed control using PWM signals and basic directional control. 

The system also integrates a limit switch for physical safety stopping and an ultrasonic sensor for distance measurement, which could be later used for automated control behavior. 

The goal of the project was to gain hands-on experience with basic control systems and mechatronics principles. This was achieved by implementing motor speed control via PWM, integrating a physical safety input using a limit switch, and experimenting with distance measurements using an ultrasonic sensor for potential future automation.   

Parts Used:

Arduino UNO R3
L298N motor driver
Yellow DC gear motor
4xAA battery holder with switch
AA batteries
HC-SR04 ultrasonic sensor
Micro limit switch
Jumper wires
alligator clip wires

What It Does:

Spins the DC motor forward using an L298N motor driver
Controls motor speed using PWM (Pulse Width Modulation)
Tests different speed levels: 40%, 60%, 80%, and 100%
Stops the motor when the limit switch is pressed (physical safety stop)
Uses the ultrasonic sensor to measure distance to nearby objects (non-contact detection input for future automation logic)
Uses external battery power for the motor while Arduino handles logic and control signals

Testing:

Speed Test:

40% PWM: motor spins but produces noticeable buzzing due to low torque
60% PWM: smoother operation with increased speed
80% PWM: strong and stable motor output
100% PWM: maximum motor speed
Observed consistent response to PWM changes across all tested levels

Limit Switch Test:

Motor runs when the switch is not pressed
Motor immediately stops when the limit switch is triggered
Motor resumes operation when the switch is released

Ultrasonic Sensor Test:

Sensor successfully detects distance to nearby objects
Stable readings observed when wiring is secure and power is stable
Distance data can be used as a future input for automatic motor stopping or obstacle avoidance logic

Problems / Troubleshooting:

Learned that the L298N ENA jumper must be removed for PWM speed control
Confirmed Arduino PWM pin must connect to ENA for speed regulation
Fixed wiring issue where motor did not respond after incorrect ENA configuration
Observed that low PWM values may cause DC gear motor buzzing or stalling
Noted that unstable wiring or power can cause inconsistent sensor readings

Skills Demonstrated:

DC motor control using L298N driver
Arduino programming and PWM control
Integration of digital inputs (limit switch)
Integration of ultrasonic distance sensing
External power management and grounding
Hardware debugging and circuit troubleshooting
Basic systems integration in a mechatronics setup

Future Improvements:

Make the motor stop automatically when an object is close to the ultrasonic sensor
Improve motor control so speed stays more consistent under load
Build a simple mount or frame so the parts are more stable and organized
Improve ultrasonic readings so they are less jumpy or noisy
Add support for controlling more than one motor

Demo Videos: 

- Motor Speed Control Test: 
https://youtube.com/shorts/wvCIU8t1eRg?feature=share 

- Ultrasonic Sensor Motor Stop: 
https://youtu.be/GDDHGd6rWX8

- Motor Limit Switch Test:
https://youtube.com/shorts/DoFICgwqdN4?feature=share
