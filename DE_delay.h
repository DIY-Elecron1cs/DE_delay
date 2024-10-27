#ifndef DE_delay_h
#define DE_delay_h
#include <Arduino.h>
class Delays {
  public:
    uint16_t Mill(uint16_t delMill) {
      _delMill = delMill;
      _delMill = millis() + delMill;
      while (millis() < _delMill) {
      }
    }
    uint32_t Micr(uint32_t delMicr) {
      _delMicr = delMicr;
      _delMicr = micros() + delMicr;
      while (micros() < _delMicr) {
      }
    }
  private:
    uint32_t _delMill;
    uint32_t _delMicr;
};
#endif
