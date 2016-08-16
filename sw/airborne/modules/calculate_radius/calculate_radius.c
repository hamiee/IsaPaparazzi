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
float * xw;
float * yw;
float calc_radius(float * xw,float * yw) {
	float xw2;
	float yw2;
	float sum_squares;
	float radius_value;
	xw2 = SQUARE(&xw);
	yw2 = SQUARE(&yw);
	sum_squares = xw2 + yw2 ;
	radius_value = sum_squares/(2*&xw);
	//printf("the radius is %d", radius_value);
	return radius_value;	
	
}

/*float some_xw = 5.0;
float some_yw = 12.0;
printf("printing the speed of the some_xw and some_yw: %d",calc_radius(some_xw,some_yw));*/


