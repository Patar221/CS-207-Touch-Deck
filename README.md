# CS-207-Touch-Deck

The Touch Deck is a simple touchscreen hooked up to an Arduino Uno to allow for programmable buttons that can perform a multitude of functions on your computer.
There are two main parts to the code of this project:
- The Ardunio code and the desktop code. The Arduino code is what intereacts with the LCD and sends information to the computer.
- The Desktop Python script is what recieves the information from the Ardiuno and porccesses it and performs the specified action on the computer.

The buttons can be mapped to various actions in the config.json file using pre-defined function names. The images used on the display must be changed in the ScreenFile.HMI using the Nextion Editor.

### Hardware List
- Arduino UNO
- 7" Nextion HMI LCD Touch Display (Model: NX8048T070_011R)
