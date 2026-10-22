// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(MANUAL);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

// Photon D7 => GPIOA pin 13
// Photon D0 => GPIOB pin 7
// Photon A1 => GPIOC pin 3
// Photon A4 => GPIOA pin 6

// setup() runs once, when the device is first turned on
void setup() {
  // Configure LED pins for push-pull output

  // Configure inputs: BTN1 with pulldown, RLS with pullup
  // pulldown

  // pullup
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // Run when button pressed or RLS pulled low
}
