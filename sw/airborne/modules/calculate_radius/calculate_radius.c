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
 * @file "modules/calculate_radius/calculate_radius.c"
 * @author Isabelle
 * This module computes the radius of the arc connecting the location of the drone and a nearby waypoint
 */

#include "modules/calculate_radius/calculate_radius.h"
#include "pprz_algebra.h"
#include <math>

float * xw;
float * yw;
struct arc_struct* fly_arc_parameters(float xw,float yw, float target_time) {
	float xw2;
	float yw2;
	float sum_squares;
	float radius_value;
	float arc_angle;
	float arc_length;
	float angular_velocity_needed;
	float needed_delta_psi;


	// calculating the arc radius
	xw2 = SQUARE(&xw);
	yw2 = SQUARE(&yw);
	sum_squares = xw2 + yw2 ;
	radius_value = sum_squares/(2*&xw);

	// calculating the arc angle
	arc_angle = M_PI - atan2f(yw,xw);

	//calculating the arc length
	arc_length = radius_value*arc_angle;

	//calculating the angular velocity needed
	angular_velocity_needed = arc_length/target_time;



	//calculating the needed change in heading
	needed_delta_psi = angular_velocity_needed * (time_target*0.02) * 0.5;




	fly_arc_parameters.needed_time = target_time;
	fly_arc_parameters.radius = radius_value;
	fly_arc_parameters.arclength = arc_length;
	fly_arc_parameters.needed_delta_psi = needed_delta_psi;
	// we have to know if we want to turn left or right. If the xw is positive, we turn right
	// and if the xw is negative we turn left.
	//Thus, if the xw is positive, the heading or the psi will have to be positive.
	
}

/*float some_xw = 5.0;
float some_yw = 12.0;
printf("printing the speed of the some_xw and some_yw: %d",calc_radius(some_xw,some_yw));*/


