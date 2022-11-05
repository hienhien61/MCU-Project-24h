/*
 * fsm_manual.c
 *
 *  Created on: Nov 3, 2022
 *      Author: PC PHUONG
 */
#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			setLedRed();

			if(timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(5000);
			}
			if(isButton1Pressed() == 1){
				status = MAN_GREEN;
				setTimer1(10000);
			}
			break;
		case MAN_GREEN:
			setLedGreen();
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(3000);
			}
			if(isButton1Pressed() == 1){
				status = MAN_YELLOW;
				setTimer1(10000);
			}
			break;
		case MAN_YELLOW:
			setLedYellow();

			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(2000);
			}
			if(isButton1Pressed() == 1){
				status = MAN_RED;
				setTimer1(10000);
			}
			break;
		default:
			break;
	}
}

