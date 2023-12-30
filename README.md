# PicoDeon, a diatonic MIDI Keyboard Project

Welcome to the repository of my diatonic MIDI keyboard project. This project involves the design and construction of a diatonic MIDI keyboard with a PCB, an acrylic case, and utilizes the QMK framework for programming the Raspberry Pi Pico microcontroller.

<img src="./img/picodeon front.png" alt="Picodeon Front View">
<img src="./img/picodeon back.png" alt="Picodeon Back View">

## The Excellence of Diatonic Keyboards

Diatonic keyboards offer an exceptional platform for musical composition and performance. Here's why:

- **Intuitive Harmony:** The diatonic scale's structure provides a natural and intuitive harmonic progression, making it easier for composers to create pleasing and melodious chord sequences.

- **Expressive Playing:** Diatonic keyboards allow for expressive playing styles, enabling musicians to convey emotions through nuanced dynamics and articulations.

- **Versatile Creativity:** Whether you're a seasoned composer or a beginner, the diatonic keyboard's simplicity and versatility make it an excellent tool for exploring a wide range of musical genres.

- **Ease of Learning:** For those new to music, the diatonic layout simplifies the learning process, making it more accessible for beginners to understand and play musical concepts.

Incorporating these features into a MIDI keyboard amplifies the potential for musical expression, making this diatonic MIDI keyboard project an exciting and valuable tool for musicians and composers alike.

<img src="./img/accordion shemat.png" alt="Accordion Schematic">

## Repository Contents

### 1. PCB
- The Gerber file for the PCB can be found in the [pcb/](pcb/) directory.
- The complete KiCad project is also included for any future modifications.

### 2. Keyboard Case
- The case consists of an upper plate and a bottom, both made of acrylic sheet.
- The case design files are located in [case/](case/).

### 3. Programming
- The QMK project, located in [qmk/](qmk/), contains the firmware necessary for the keyboard's operation.
- The UF8 file to flash onto the Raspberry Pi Pico is also available in this directory.

## Keyboard Assembly

1. **Soldering Components to the PCB**
    - Place and solder the 60 SOD 123 diodes on the PCB.
    - Install the 60 mechanical keyboard switches in their respective positions.
    - Solder the Raspberry Pi Pico onto the PCB.

2. **Case Assembly**
    - Use M2 screws and spacers to secure the upper plate, bottom, and PCB together.
    - Ensure that the components align properly, and the keyboard is securely fastened.

3. **Firmware Flashing**
    - Connect the Raspberry Pi Pico to a computer.
    - Use an appropriate programming tool to flash the UF8 file located in [qmk/](qmk/) onto the Raspberry Pi Pico.

4. **Usage**
    - Connect the keyboard to a computer or another MIDI-compatible device.
    - Experience the excellence of diatonic keyboards for composing chords and playing music!

## Ready-to-Use Option

For those who prefer a hassle-free experience, this diatonic MIDI keyboard is available for purchase on [picokeebs.fr](https://picokeebs.fr). Get your hands on a pre-assembled and ready-to-use version of this exceptional musical instrument.

## Notes
- Be sure to adhere to soldering specifications to avoid any operational issues.
- Feel free to customize the project by making modifications to the PCB, case, or QMK firmware as needed.

Have fun with your diatonic MIDI keyboard! If you have any questions or suggestions, feel free to share them in the repository's issues section.

Shield: [![CC BY-NC-SA 4.0][cc-by-nc-sa-shield]][cc-by-nc-sa]

This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License][cc-by-nc-sa].

[![CC BY-NC-SA 4.0][cc-by-nc-sa-image]][cc-by-nc-sa]

[cc-by-nc-sa]: http://creativecommons.org/licenses/by-nc-sa/4.0/
[cc-by-nc-sa-image]: https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png
[cc-by-nc-sa-shield]: https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg
