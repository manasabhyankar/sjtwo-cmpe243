#include "Mockboard_io.h"
#include "Mockgpio.h"

#include "switch_led.h"

void setUp(void) {}
void tearDown(void) {}

void test_switch_led_initialize(void) {
  gpio_s gpio;
  board_io__get_led1_ExpectAndReturn(gpio);
  board_io__get_sw1_ExpectAndReturn(gpio);
  switch_led_initialize();
}

void test_toggle_led_if_switch_pressed(void) {
  gpio_s gpio;
  gpio__get_ExpectAndReturn(gpio, false);
  toggle_led_if_switch_pressed();
  gpio__get_ExpectAndReturn(gpio, true);
  gpio__toggle_Expect(gpio);
  toggle_led_if_switch_pressed();
}