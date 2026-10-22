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

// setup() runs once, when the device is first turned on
void setup() {
  // Configure GPIOA pin 13 for push-pull output using register bit manipulation
  // clear existing mode bits
  // set to general purpose output

  // set output type to push-pull (0)
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // Toggle LED via direct register writes to the output data register
  // set pin high
  // set pin low
}
