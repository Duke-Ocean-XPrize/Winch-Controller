# Winch-Controller
Code for the winch controller Arduino talking to the VESC operating a brushless motor.

## VESC setup
Connect the VESC to the motor and plug in the hall sensor wires. Connect the VESC to a computer using a USB Mini cable and start up the VESC tool. Click "Connect" at the bottom of the welcome page. Then click "Motor Setup Wizard".

## Arduino setup
The Arduino governs speed of the motor via PPM signals to the VESC. It recieves data about the motor's hall sensor through the VESC's UART pins. Upload the `VESCPositionControl.ino` sketch to make the motor move until the hall sensor has reached 5000 ±50 ticks.