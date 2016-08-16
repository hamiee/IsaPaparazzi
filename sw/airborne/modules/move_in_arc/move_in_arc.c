/*
 * Copyright (C) Isabelle
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
 * @file "modules/move_in_arc/move_in_arc.c"
 * @author Isabelle
 * This module will determine the velocity system inputs needed to be provided to the system
 */

#include "modules/move_in_arc/move_in_arc.h"
#include "modules/set_velocity_guidance/set_velocity_guidance.h"
#include "modules/calculate_radius/calculate_radius.h"
//add roland's module to obtain the coordinates of the center of the hoop/ square

/* initiating the clock */
set_counter_init();
counter_auto();

/* defining omega which we set for now */
omega = 1.0;

/* defining the delta_t since the frequency of the counter is 20Hz, delta_t is 0.05s */
delta_t = 0.05;

/*thus gamma is 1*0.05 */
gamma = delta_t * omega;

/* the following periodic function whose frequency is 20Hz */
void give_vx_vy(){
	calculated_radius = calculate_radius(xw,yw);
	calculated_velocity = calculated_radius * gamma/delta_t;
	calculated_vx = calculated_velocity * sin(gamma/2);
	calculated_vy = calculated_velocity * cos(gamma/2); 
	guidance_h_set_guided_body_vel(calculated_vx, calculated_vy,0);
	guidance_h_set_guided_heading(gamma/2);
	guidance_v_set_guided_z(-1.5);		
}


