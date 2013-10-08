/* 
 * OpenVirtualization: 
 * For additional details and support contact developer@sierraware.com.
 * Additional documentation can be found at www.openvirtualization.org
 * 
 * Copyright (C) 2011 SierraWare
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 * Timer functions that may be needed
 */

#ifndef TIMER_FUNCTIONS_H
#define TIMER_FUNCTIONS_H


#include "sw_types.h"

/**
 * @brief
 *   This function sleeps for the given number of seconds
 *
 * @param secs
 *  Number of secs to sleep
 */
void sw_sleep(u32 secs);

/**
 * @brief
 *   This function sleeps for the given number of micro seconds
 *
 * @param usecs
 *  Number of micro secs to sleep
 */
void sw_usleep(u32 usecs);
#endif
