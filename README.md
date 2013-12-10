ArduinoOLEDLibrary
==================

An Arduino v1.0+ library for [Newhaven OLED displays](http://www.newhavendisplay.com/oled-c-119.html), such as the NHD‐0420DZW series.

This is an edit to [Elco Jacobs](http://www.elcojacobs.com) OLED library ([here](https://code.google.com/p/uberfridge/source/browse/trunk/arduino/#arduino%2FOLEDFourBit)), which would not compile under v1.0+ of the Arduino IDE (Tested on v1.0.5).

This library is for the 4-bit parallel interface. See the datasheet for wiring diagrams.

To use, just copy the OLEDFourBit folder into arduino-1.x.x/libraries. Initialization and available functions are identical to the default Arduino LiquisCrystal library. An example sketch is included.