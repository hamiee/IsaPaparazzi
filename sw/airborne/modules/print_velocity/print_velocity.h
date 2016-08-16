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
 * @file "modules/print_velocity/print_velocity.h"
 * @author Isabelle
 * This module will print the velocity of the drone by using the stateGetSpeedNed_i(void) function which will return a pointer to a structure containing the velocity components
 */

#ifndef PRINT_VELOCITY_H
#define PRINT_VELOCITY_H

extern float velocity_x;
extern float velocity_y;
extern float velocity_z;

extern int begin(void);
extern void print_velocity_per(void);

#endif

