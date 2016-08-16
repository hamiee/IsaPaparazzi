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
 * @file "modules/set_velocity/set_velocity.h"
 * @author Isabelle
 * This module will set the velocity of the drone to some constant value
 */

#ifndef SET_VELOCITY_H
#define SET_VELOCITY_H
extern int counter_i_i;
extern int* pointerCounter;
extern long time;

extern void begin_counter(void);
extern void counter(void);
extern void set_velocity(void);
extern int keep_counter(void);


#endif

