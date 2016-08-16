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
 * @file "modules/set_velocity/set_velocity.c"
 * @author Isabelle
 * This module will set the velocity of the drone to some constant value
 */

#include "modules/set_velocity/set_velocity.h"
#include "firmwares/rotorcraft/guidance/guidance_h.h"
#include "mcu_periph/sys_time.h"
#include "firmwares/rotorcraft/autopilot.h"
#include <stdio.h>

/*int counter_i_i;
int* pointerCounter;*/
long timepdpdpdpd;

/*int begin_counter() {
	/*pointerCounter = &counter_i_i;
	(*pointerCounter) = 0;*/
	//}*/

void counter() {
	/*(*pointerCounter)++;*/
	timepdpdpdpd = sys_time.nb_sec + sys_time.nb_sec_rem;
	printf("the time is %d",time);
}
int keep_counter() {
	if((timepdpdpdpd<=10.0 && autopilot_mode == AP_MODE_GUIDED))
		return 1;
	if(timepdpdpdpd>10.0)
		{autopilot_mode = AP_MODE_HOVER_DIRECT;
		return 0;}
	else
		return 0;		
}
void set_velocity() {
	if(keep_counter())
		guidance_h_set_guided_vel(0.5,0.0);
	else
		printf("Time is up for setting the velocity");
}

