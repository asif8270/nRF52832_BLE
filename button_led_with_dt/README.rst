.. _blinky-sample:

Blinky
######

Overview
********

The Blinky sample blinks an LED forever using the Device Tree and Overlay file. In this project I have 
connected the LED to pin 27 of the DK which is SCL pin by default. So, you have to disable the i2c on
the pin. Please check the Overlay file.

The source code shows how to:

#. Get a pin specification from the Device Tree
#. Disable the functionality on the pin
#. Configure the GPIO pin as an output
#. Toggle the pin forever

Requirements
************

Your board must:

#. Have an LED connected via a GPIO pin (these are called "User LEDs" on many of
   Zephyr's :ref:`boards`).

Building and Running
********************

Build and flash Blinky by pressing the Build and flash button from Action menu.
