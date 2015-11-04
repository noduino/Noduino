Noduino
===========================================

Arduino core for ESP8266 WiFi SoC based on esp8266/Arduino

This project brings support for ESP8266 chip to the Arduino environment. It lets you write sketches using familiar Arduino functions and libraries, and run them directly on ESP8266, no external microcontroller required.

ESP8266 Arduino core comes with libraries to communicate over WiFi using TCP and UDP, set up HTTP, mDNS, SSDP, and DNS servers, do OTA updates, use a file system in flash memory, work with SD cards, servos, SPI and I2C peripherals.

### Using git version

- Install Arduino 1.6.5 / 1.6.6
- Go to Arduino directory
- Clone this repository into hardware/esp8266com/esp8266 directory (or clone it elsewhere and create a symlink)
```bash
cd hardware
mkdir esp8266com
cd esp8266com
git clone git://github.com/icamgo/Noduino.git esp8266
```
- Download binary tools (you need Python 2.7)
```bash
cd esp8266/tools
python get.py
```
- Restart Arduino

Documentation for latest development version:

- [Reference](doc/reference.md)
- [Supported boards](doc/boards.md)
- [Change log](doc/changes.md)

