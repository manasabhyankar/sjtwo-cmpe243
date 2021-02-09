#include "switch_led.h"

void switch_led_initialize(void) {
  led1 = board_io__get_led1();
  switch1 = board_io__get_sw1();
}

void toggle_led_if_switch_pressed(void) {
  if (gpio__get(switch1)) {
    gpio__toggle(led1);
  }
}