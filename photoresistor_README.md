# Notes from Photoresistor

![arduino board with ultrasonic distance sensor](/assets/images/photoresistor.png)

<p>The photoresistor connects its terminal 1 to the 5v pin on the Arduino board for power and its terminal 2 to a resistor. The resistor has a resistance of 10 kiloohms, its terminal 1 is connected to the GND pin on the Arduino board and its terminal 2 is connected to the A0 pin. A0 is an analog input pin, whose input is measured in values between 0 and 1023 (i.e. 2^10). To convert its input into voltage, the input is multiplied by the voltage supplied by the Arduino board (5), then divided by 1024. The voltage is printed to the serial monitor </p>
