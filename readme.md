# GoodbyeNJN

![GoodbyeNJN](https://i.imgur.com/q2M3uEU.jpg)

A keyboard with a similar 96-key layout, but has a short space bar with fn keys on both sides.

* Keyboard Maintainer: [GoodbyeNJN](https://github.com/GoodbyeNJN)
* Hardware Supported: [Teensy 2.0](https://www.pjrc.com/store/teensy.html)
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make goodbyenjn:default

Flashing example for this keyboard:

    make goodbyenjn:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
