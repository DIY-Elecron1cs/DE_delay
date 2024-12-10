#ifndef DE_delay_h
#define DE_delay_h
#include <Arduino.h>

#define SECOND 1000

class Delays {
  public:
    void mill(uint16_t delMill) {
      _delMill = millis() + delMill;
      while (millis() < _delMill) {
      }
    }
    void micr(uint32_t delMicr) {
      _delMicr = micros() + delMicr;
      while (micros() < _delMicr) {
      }
    }
  private:
    uint32_t _delMill;
    uint32_t _delMicr;
};
#endif
