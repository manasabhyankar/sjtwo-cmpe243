#include "switch_led.h"

void switch_led_initialize() {
  led0 = gpio__construct_as_output(GPIO__PORT_2, 0);
  switch0 = gpio__construct_as_output(GPIO__PORT_2, 1);
}