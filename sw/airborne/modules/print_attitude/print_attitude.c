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
 * @file "modules/print_attitude/print_attitude.c"
 * @author Isabelle
 * This module will print the attitudethe UAV periodically with a frequency of 1Hz
 */

#include "modules/print_attitude/print_attitude.h"
#include <stdio.h>
#include "state.h"


void print_start() {
	printf("Begin print!\n");
}
void print_attitude_per(){
	float Psi = stateGetNedToBodyEulers_f()->psi;
	float Phi = stateGetNedToBodyEulers_f()->phi;
	float Theta = stateGetNedToBodyEulers_f()->theta; 
	printf("Psi: %f \n Phi: %f \n Theta: %f \n",Psi,Phi,Theta);
}


