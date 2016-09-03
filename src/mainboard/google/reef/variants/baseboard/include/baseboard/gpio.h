/*
 * This file is part of the coreboot project.
 *
 * Copyright 2016 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef BASEBOARD_GPIO_H
#define BASEBOARD_GPIO_H

#include <soc/gpio.h>

/*
 * GPIO_11 for SCI is routed to GPE0_DW1 and maps to group GPIO_GPE_N_31_0
 * which is North community
 */
#define EC_SCI_GPI	GPE0_DW1_11

/* EC SMI */
#define EC_SMI_GPI	GPIO_49

/*
 * On lidopen/lidclose GPIO_22 from North Community gets toggled and
 * is used in _PRW to wake up device from sleep. GPIO_22 maps to
 * group GPIO_GPE_N_31_0 and the pad is configured as SCI with
 * EDGE_SINGLE and INVERT.
 */
#define GPE_EC_WAKE	GPE0_DW1_22

/* Write Protect and indication if EC is in RW code. */
#define GPIO_PCH_WP	GPIO_75
#define GPIO_EC_IN_RW	GPIO_41

/*
 * The proto boards didn't have memory SKU pins, but the same ones can be
 * utilized as post proto boards because the pins used were never connected
 * or no peripheral utilized the signals on proto boards.
 */
#define MEM_CONFIG3	GPIO_45
#define MEM_CONFIG2	GPIO_38
#define MEM_CONFIG1	GPIO_102
#define MEM_CONFIG0	GPIO_101

#endif /* BASEBOARD_GPIO_H */