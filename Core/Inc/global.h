/*
 * global.h
 *
 *  Created on: Nov 3, 2022
 *      Author: PC PHUONG
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "function.h"

#define INIT 		1
#define COUNT		2
#define UP1		 	3
#define DOWN1		4
#define RESET_FSM	5

#define	LONG_UP1	6
#define LONG_DOWN1	7


#define red 		5000
#define	green		3000
#define yellow		2000

extern int status;
extern int counter;

#endif /* INC_GLOBAL_H_ */
