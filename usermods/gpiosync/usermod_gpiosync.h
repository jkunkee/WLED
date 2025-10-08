#pragma once

#include "wled.h"

// Globals
//extern uint32_t GpioSyncMailbox; // DIDN'T WORK
//uint32_t GpioSyncMailbox = 0;

class GpioSyncUsermod : public Usermod {
  private:
    gpio_num_t pulsePin = GPIO_NUM_25;

  public:
    void setup() {
      pinMode(pulsePin, OUTPUT_OPEN_DRAIN);
      digitalWrite(pulsePin, HIGH);
    }

    void loop() {
    }
};