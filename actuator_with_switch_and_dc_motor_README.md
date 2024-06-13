# Notes from Actuator with Switch and DC Motor

![arduino board with three led lights](/assets/images/actuator_with_gearbox.png)

<p>The motor requires more than the 5 volts supplied by the Arduino board. The anode of a 9v battery connects to a switch, which lies in the middle of a breadboard, to supply the motor with the necessary power. To ground the battery, its cathode is plugged into the - row of the breadboard, which is connected to the GND pin on the Arduino board. Likewise, the two ground pins on the switch are connected to the - row.</p>
<p>The switch itself requires power. Its Power 1 and Enable 1 & 2 pins are connected to the + row, which is connected to the 5v pin on the Arduino board. </p>
<p>The switch's two output pins connect to the diodes of the motor. Its two input pins connect to digital pins on the Arduino board. They have ~ marks to indicate they are capable of analog output</p>
<p>The motor's direction depends on which diode is receiving input. The code is written to alternate directions by using digitalWrite() to make one pin HIGH and to make the other pin LOW, then switching the values of the pins</p>
