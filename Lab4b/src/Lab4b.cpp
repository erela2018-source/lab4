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

// setup() runs once, when the device is first turned on
void setup() {
  // Configure GPIOA pin 13 (D7) for push-pull output

  // Configure GPIOB pin 7 (D0) for push-pull output
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // Drive both LEDs high then low via direct register writes
}
