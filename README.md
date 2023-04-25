# tv4k-dfu

Uses the Arduino RC circuit to convert Arduino Uno's PWM to (mostly) steady DC current, suitable for selecting an Apple TV 4k's `mode` pin.

Script is set up to wait until the button is pressed, then send ~1.3v to the `mode` pin, triggering a reset. It then sends ~0.8v to the `mode` pin, telling it to enter DFU on every boot.

Connect the orange wire to the `mode` pin (pin 6), and the gray wire to the `GND` pin (pin 5) on the TV. You can use a custom breakout cable for the port in the Ethernet socket, or solder to the pads on the TV's logic board.
Once it's wired up, run the script, then press the button.

![image](https://user-images.githubusercontent.com/87622301/234354679-5e98da34-f6d6-41cf-8f11-76bd87ec91f7.png)

