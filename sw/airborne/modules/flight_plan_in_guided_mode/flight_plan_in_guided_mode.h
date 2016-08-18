/*
 * Copyright (C) Shuo Li
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/flight_plan_in_guided_mode/flight_plan_in_guided_mode.h"
 * @author Shuo Li
 * This module is used to generate flight plan in guided mode
 */

#ifndef FLIGHT_PLAN_IN_GUIDED_MODE_H
#define FLIGHT_PLAN_IN_GUIDED_MODE_H
#include "flight_plan_clock.h"


 extern void flight_plan_in_guided_mode_init(void);
 extern void flight_plan_run(void);
 extern void display_information(void);
 extern void set_bit_ls(bool *mask,int bit);
 extern void clear_bit_ls(bool *mask,int bit);
 extern bool bit_is_set_ls(bool *mask,int bit);

#endif

#ifndef CALCULATE_RADIUS_H
#define CALCULATE_RADIUS_H
#define M_PI 3.14159265358979323846

//extern void calc_radius(void);
//extern float xw;
//extern float yw;
struct arc_struct {
	float needed_heading;
	float needed_time;
	float radius;
	float arc_length;
	float needed_delta_psi;
};

extern void fly_arc_parameters(float xw,float yw, float target_time);
extern struct arc_struct fly_arc_vals;
extern void fly_arc(float xw,float yw, float planned_time);
#endif

