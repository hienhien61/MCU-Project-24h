/*

 * fsm_automatic.c
 *
 *  Created on: Nov 3, 2022
 *      Author: PC PHUONG

#include "fsm_automatic.h"


void fsm_automatic_run(){
	switch(status){
		case INIT:
			//TODO
			clearLed();

			status = AUTO_RED;
			setTimer1(red);
			break;
		case AUTO_RED:
			setLedRed();

			if(timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(green);
			}
			if(isButton1Pressed() == 1){
				status = MAN_RED;
				setTimer1(10000);
			}
			break;
		case AUTO_GREEN:
			setLedGreen();

			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(yellow);
			}
			if(isButton1Pressed() == 1){
				status = MAN_GREEN;
				setTimer1(10000);
			}
			break;
		case AUTO_YELLOW:
			setLedYellow();

			if(timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(red);
			}
			if(isButton1Pressed() == 1){
				status = MAN_YELLOW;
				setTimer1(10000);
			}
			break;
		default:
			break;
	}
}

*/
