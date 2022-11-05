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
#define AUTO_RED	2
#define AUTO_GREEN 	3
#define AUTO_YELLOW	4

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW	14

#define red 		5000
#define	green		3000
#define yellow		2000

extern int status;

#endif /* INC_GLOBAL_H_ */
