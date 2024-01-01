# PicoDeon, a midi chromatic accordion keybaord - DIY Project

Unable to find a MIDI accordion keyboard online! Isn't that strange? Everyone could use one, though... Well, no worries! I'm going to make my own :)

<img src="./img/picodeon front.png" alt="Picodeon Front View">
<img src="./img/picodeon back.png" alt="Picodeon Back View">

You can watch a short demonstration on youtube [here](https://youtu.be/MS7t3GJ2ovU) 

## Directory Contents

### Keyboard PCB
- The Gerber file for the PCB is available, along with its KiCad project. This will allow you to customize and adjust the keyboard according to your needs.

### Case Design
- An SVG image representing the case design, consisting of an upper (plate) and a bottom made of acrylic sheet. This design ensures a sturdy and aesthetic structure.

### QMK Project and Firmware
- The QMK (Quantum Mechanical Keyboard) project is included, along with the corresponding firmware to drag and drop into your Raspberry Pi Pico. Easy to integrate, it provides a smooth user experience.

## Hardware Assembly

To assemble your chromatic MIDI keyboard, you will need:
- 60 SOD-123 diodes
- 60 mechanical keyboard switches
- 1 Raspberry Pi Pico
- M2 screws and spacers to secure the plate, bottom, and PCB together.

## Assembly Steps

1. Solder the 60 SOD-123 diodes onto the PCB.
2. Attach the 60 mechanical keyboard switches to the corresponding locations.
3. Integrate the Raspberry Pi Pico onto the PCB.
4. Use M2 screws and spacers to securely assemble the plate, bottom, and PCB.

## Accordion Experience

Accordion keyboards offer a unique and powerful experience for composing chords. Their simple and natural layout facilitates musical creation. Using this customized chromatic MIDI keyboard will allow you to explore and enhance your musical skills in an innovative way.

<img src="./img/accordion shemat.png" alt="Accordion Schematic">

## Purchase Option

If assembling the DIY keyboard seems challenging, you also have the option to purchase the fully assembled chromatic keyboard on PicoKeebs, making your musical experience even more accessible.

Enjoy your customized chromatic MIDI keyboard and explore new musical possibilities!



Have fun with your diatonic MIDI keyboard! If you have any questions or suggestions, feel free to share them in the repository's issues section.

Shield: [![CC BY-NC-SA 4.0][cc-by-nc-sa-shield]][cc-by-nc-sa]

This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License][cc-by-nc-sa].

[![CC BY-NC-SA 4.0][cc-by-nc-sa-image]][cc-by-nc-sa]

[cc-by-nc-sa]: http://creativecommons.org/licenses/by-nc-sa/4.0/
[cc-by-nc-sa-image]: https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png
[cc-by-nc-sa-shield]: https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg
