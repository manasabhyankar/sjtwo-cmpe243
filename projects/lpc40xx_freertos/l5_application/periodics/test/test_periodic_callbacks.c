#include <stdio.h>
#include <string.h>

#include "unity.h"

// Include the Mocks
// - This will not pull the REAL source code of these modules (such as board_io.c)
// - This will auto-generate "Mock" versions based on the header file
#include "Mockboard_io.h"
#include "Mockgpio.h"
#include "Mockswitch_led.h"
// Include the source we wish to test
#include "periodic_callbacks.h"

void setUp(void) {}

void tearDown(void) {}

void test__periodic_callbacks__initialize(void) {
  switch_led_initialize_Expect();
  periodic_callbacks__initialize();
}

void test__periodic_callbacks__10Hz(void) {
  toggle_led_if_switch_pressed_Expect();
  periodic_callbacks__10Hz(0);
}