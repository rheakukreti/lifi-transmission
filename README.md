# TEXT TRANSMISSION THROUGH LI-FI

A simple project using the principles of li-fi to send text from one computer to another. Two arduinos and, two LEDs and an LDR are used along with connecting wires to realize the circuit. The schematic for the circuits will be up in the near future. If you possess an LED, the brightness of and pulsation of which you can contol and an LDR that can read said pulsations, then you may be able to make use of the codes.

Transmitter Code:
The receiver assigns each character with a 1x8 array. The array represents the 8-bit ASCII code of the character in terms of high (H) or low (L) values. Characters are read from the serial monitor of the Arduino Uno IDE. Read characters are then matched with their array representation. The H and L control brightness values of the LED, hence realizing a version of on-off keying through the LED.

Receiver Code:
The receiver can be optimized to cancel out light detected by LDR from the surroundings and instead be made to focus only on the ranges of varying brightness from the intended LED. The light received from the LED is then mapped out to it's associated ASCII value and eventually is mapped to the correct character. The received character is then displayed on the serial monitor of the receiving computer.
