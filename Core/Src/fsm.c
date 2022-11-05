/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: PC PHUONG
 */
#include "fsm.h"

void fsm_simple_buttons_run(){
	switch(status){
		case INIT:
			status = COUNT;
			setTimer1(1000);
			break;
		case COUNT:
			display7SEG(counter);
			if(timer1_flag == 1){
				counter--;
				if(counter < 0) counter = 9;
				setTimer1(1000);
			}
			if(isIncPressed() == 1){
				status = UP1;
				counter++;
				setTimer1(1000);
			}
			if(isDecPressed() == 1){
				status = DOWN1;
				counter--;
				setTimer1(1000);
			}
			if(isResetPressed() == 1){
				status = RESET_FSM;
				setTimer1(1000);
			}
			break;
		case UP1:
			if(counter > 9) counter = 0;
			display7SEG(counter);
			if(timer1_flag == 1){
				if(isIncLongPressed() == 1){
					status = LONG_UP1;
					setTimer1(1000);
				}else{
					status = COUNT;
					setTimer1(1000);
				}
			}
			if(isIncLongPressed() == 1){
				status = LONG_UP1;
				setTimer1(1000);
			}
			if(isIncPressed() == 1){
				status = UP1;
				counter++;
				setTimer1(1000);
			}
			if(isDecPressed() == 1){
				status = DOWN1;
				counter--;
				setTimer1(1000);
			}
			if(isResetPressed() == 1){
				status = RESET_FSM;
				setTimer1(1000);
			}
			break;
		case DOWN1:
			if(counter < 0) counter = 9;
			display7SEG(counter);
			if(isDecPressed() == 1){
				status = DOWN1;
				counter--;
				setTimer1(1000);
			}
			if(timer1_flag == 1){
				status = COUNT;
				setTimer1(1000);
			}
			if(isIncPressed() == 1){
				status = UP1;
				counter++;
				setTimer1(1000);
			}

			if(isResetPressed() == 1){
				status = RESET_FSM;
				setTimer1(1000);
			}

			break;
		case RESET_FSM:
			counter = 0;
			display7SEG(counter);
			if(timer1_flag == 1){
				status = COUNT;
				setTimer1(1000);
			}
			if(isIncPressed() == 1){
				status = UP1;
				counter++;
				setTimer1(1000);
			}
			if(isDecPressed() == 1){
				status = DOWN1;
				counter--;
				setTimer1(1000);
			}
			if(isResetPressed() == 1){
				status = RESET_FSM;
				setTimer1(1000);
			}
			break;
//		default:
//			break;
//	}
//}
//
//void fsm_long_buttons_run(){
//	switch(status){
		case LONG_UP1:
			display7SEG(5);
//			if(timer1_flag == 1){
//				counter++;
//				if(counter > 9) counter = 0;
//				setTimer1(1000);
//			}
//			if(isIncLongPressed() == 1) {
//				status = LONG_UP1;
//				setTimer1(1000);
//			}
//			if(isIncLongPressed() == 0){
//				status = COUNT;
//				setTimer1(1000);
//			}
			break;
		case LONG_DOWN1:
			display7SEG(counter);
			if(timer1_flag == 1){
				counter--;
				if(counter < 0) counter = 9;
				setTimer1(1000);
			}
			if(isDecLongPressed() == 1) {
				status = LONG_DOWN1;
				setTimer1(1000);
			}
			if(isDecLongPressed() == 0){
				status = COUNT;
				setTimer1(1000);
			}
			break;
		default:
			break;
	}
}
