/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_Pin GPIO_PIN_0
#define PWM_GPIO_Port GPIOA
#define Motor_ENA_Pin GPIO_PIN_14
#define Motor_ENA_GPIO_Port GPIOB
#define Motor_ENB_Pin GPIO_PIN_15
#define Motor_ENB_GPIO_Port GPIOB
#define Encoder_A_Pin GPIO_PIN_8
#define Encoder_A_GPIO_Port GPIOA
#define Encoder_B_Pin GPIO_PIN_9
#define Encoder_B_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */
#define tick_per_revolution 900
#define T 0.01 // sample time = 10 ms = 0.01s
#include "stdio.h"
#include "stdlib.h"
//#define tick_per_revolution 900
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
