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
 * @file "modules/move_in_arc/move_in_arc.h"
 * @author Isabelle
 * This module will determine the velocity system inputs needed to be provided to the system and set velocity commands
 */

#ifndef MOVE_IN_ARC_H
#define MOVE_IN_ARC_H

extern void give_vx_vy();
extern float calculated_radius;
extern float delta_t;
extern float omega;
extern float gamma;
extern float calculated_velocity;
extern float calculated_vx;
extern float calculated_vy;

#endif

