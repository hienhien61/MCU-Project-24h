/*
 * function.c
 *
 *  Created on: Nov 4, 2022
 *      Author: PC PHUONG
 */
#include <function.h>

void clearLed(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}

void setLedRed(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}

void setLedGreen(){
//	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}

void setLedYellow(){
//	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}

void display7SEG(int num){
	if(num == 1){
		HAL_GPIO_WritePin(GPIOB, 0x06, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x79, GPIO_PIN_SET);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(GPIOB, 0x5B, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x24, GPIO_PIN_SET);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(GPIOB, 0x4F, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x30, GPIO_PIN_SET);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(GPIOB, 0x66, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x19, GPIO_PIN_SET);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(GPIOB, 0x6D, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x12, GPIO_PIN_SET);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(GPIOB, 0x7D, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x02, GPIO_PIN_SET);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(GPIOB, 0x07, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x78, GPIO_PIN_SET);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(GPIOB, 0x7F, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x00, GPIO_PIN_SET);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(GPIOB, 0x6F, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x10, GPIO_PIN_SET);
	}
	else{
		HAL_GPIO_WritePin(GPIOB, 0x3F, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, 0x40, GPIO_PIN_SET);
	}

}

