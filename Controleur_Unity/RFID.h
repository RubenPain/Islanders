/**************************************************************************
  Pins
  ====

  1. VCC support 3.3 ~ 5V
  2. TX, RX connect to Arduino or Seeeduino
  3. T1, T2 is the Signal port for RFID antenna
  4. W0, W1 is for wiegand protocol, but this library not support yet.

  ```
      +-----------+
    ----|VCC    T1|----
    ----|GND    T2|----
    ----|TX    SER|----
    ----|RX    LED|----
    ----|W0   BEEP|----
    ----|W1    GND|----
      +-----------+
  ```
***************************************************************************/

#ifndef SeeedRFID_H
#define SeeedRFID_H

#include <SoftwareSerial.h>
#include "Arduino.h"

#define RFID_RX_PIN 12
#define RFID_TX_PIN 13
#define RFID_EN 13

struct RFIDdata
{
  int dataLen;
  byte chk;
  boolean valid;
  unsigned char raw[5];
};

enum RFIDType
{
  RFID_UART,
  RFID_WIEGAND
};

class SeeedRFID
{
  private:
    SoftwareSerial * _rfidIO; // software serail
    RFIDdata _data;
    boolean _isAvailable;
    RFIDType _type;
    boolean checkBitValidationUART();
    boolean read();
  public:
    SeeedRFID(int rxPin, int txPin);
    ~SeeedRFID();

    boolean isAvailable();
    RFIDdata data();
    unsigned long cardNumber();
    boolean TagAvailable;
    void listen();
};

#endif //__SeeedRFID_H__
