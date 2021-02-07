`bitFiddling` demonstrates bit operations for Teensy usage. 
  - `set_bit` function modifies the register value by setting the designated pin to 1 without altering other pins. This uses left shift (Binary OR)
  - `flip_bits` function flips all bits in the register value so that all bits that were 1 = 0 & 0 = 1. This uses binary NOT
  - `clear_bit` function modifies register value by clearing the designated pin (set to 0) without altering other pins. This can be done with left shift, binary NOT or binary AND
  - `toggle_bit` function modifies the supplied register value by flipping designated pin and leaving others unchanged. This uses binary XOR\
  
`blinkLED` periodically turns the LED light on and off
  - `setupLed` configures the data direction register for Port BN to use LED0 for output (controlled by pin 2) and ensures LED is off. 
  - `turnOnLed0` sets pin 2 of port B output register.
  - `turnOffLed0` clears pin 2 of port B output register.\
 
 `gamecontrol2` allows to manually turn 2 LEDS on or off using dpad
  - if joystick is in upwards position, both LEDs are on
  - if joystick is in downward position, both LEDs are off
  - if joystick is pushed left, left LED is on and right LED is off
  - if joystick is pushed right, right LED is on and left LED is on
  - if joystick center switch has been pressed, both LEDs are toggled\
  
 `ledButtons` allows to manually turn 2 LEDs on or off using buttons (SW1 & SW2 respectively)
  - `process_led_buttons` function turns on LED0 if SW1 is pressed & LED1 if SW2 is pressed
 
 
