TeensyCSRF is a system to generate a valid CSRF pulse train for the teensy 3.2 processors

This would essentially enable you to run a Crossfire DIY radio on a teensy 3.2 board.

Build is relatively simple.

You will need

1.  Teensy 3.2
2.  1 x 2.4k  resistor


The resistor enables the port to operate in single wire mode.

Place resitor across pins 0 and 1	(TX1 RX1)

Connect pin 0 on the teensy to the CSRF pin on the crossfire module.
This can be fouund in two locations.

* On the full size module - either on the JR module or the CSRF pin on the module as shown in the Crossfire Manual.
*
* If accessing the pin via the JR module - this is the lowest pin commonly refered to as the ANT or SPORT pin.
*
* An example of this can be found here:
* https://oscarliang.com/ctt/uploads/2016/05/flash-frsky-rx-firmware-Taranis_module_bay.jpg

Ensure you have supplied power to the devices and a suitable GND connection is shared.

Enjoy!




