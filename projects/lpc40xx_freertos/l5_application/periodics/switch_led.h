#pragma once
#include "board_io.h"
#include "gpio.h"

static gpio_s led0;
static gpio_s switch0;

void switch_led_initialize();