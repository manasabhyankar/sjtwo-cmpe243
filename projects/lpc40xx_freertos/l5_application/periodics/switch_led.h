#pragma once

#include "board_io.h"
#include "gpio.h"

static gpio_s led1;
static gpio_s switch1;

void switch_led_initialize(void);
void toggle_led_if_switch_pressed(void);