/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#define TEMPERATURE_1_Pin GPIO_PIN_0
#define TEMPERATURE_1_GPIO_Port GPIOA
#define PWM_LED_Pin GPIO_PIN_2
#define PWM_LED_GPIO_Port GPIOA
#define Btn_Pin GPIO_PIN_5
#define Btn_GPIO_Port GPIOA
#define ENCODER_1_Pin GPIO_PIN_6
#define ENCODER_1_GPIO_Port GPIOA
#define ENCODER_2_Pin GPIO_PIN_7
#define ENCODER_2_GPIO_Port GPIOA
#define SPI2_Pin GPIO_PIN_15
#define SPI2_GPIO_Port GPIOB
#define PID_PWM_OUT_Pin GPIO_PIN_15
#define PID_PWM_OUT_GPIO_Port GPIOA
#define BREIZ_IN_EXTI_Pin GPIO_PIN_3
#define BREIZ_IN_EXTI_GPIO_Port GPIOB
#define BREIZ_OUT_Pin GPIO_PIN_4
#define BREIZ_OUT_GPIO_Port GPIOB
#define RELAY_HIST_Pin GPIO_PIN_5
#define RELAY_HIST_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
//page 16- 8000-8800

  static const int   User_Page_Adress[]={
  0x0800FC00,0x0800FC04,0x0800FC08,0x0800FC0C,0x0800FC10,0x0800FC14,0x0800FC18,0x0800FC1C,
  0x0800FC20,0x0800FC24,0x0800FC28,0x0800FC2C,0x0800FC30,0x0800FC34,0x0800FC38,0x0800FC3C,
  0x0800FC40,0x0800FC44,0x0800FC48,0x0800FC4C,0x0800FC50,0x0800FC54,0x0800FC58,0x0800FC5C,
  0x0800FC60,0x0800FC64};
  static const uint16_t NTC_10k[116]={
    796,830,865,900,937,974,1012,1050,
    1090,1129,1170,1211,1252,1294,1337,1379,
    1423,1466,1510,1554,1598,1642,1687,1731,
    1776,1820,1864,1908,1952,1996,2040,2083,
    2126,2169,2211,2253,2294,2335,2375,2415,
    2454,2493,2531,2569,2606,2642,2678,2713,
    2747,2781,2814,2847,2879,2910,2940,2970,
    2999,3028,3055,3083,3109,3135,3160,3185,
    3209,3232,3255,3278,3299,3320,3341,3361,
    3380,3399,3418,3436,3453,3470,3487,3503,
    3519,3534,3549,3563,3577,3591,3604,3617,
    3629,3641,3653,3664,3675,3686,3697,3707,
    3717,3727,3736,3745,3754,3762,3771,3779,
    3787,3794,3802,3809,3816,3823,3830,3836,
    3842,3849,3855,3860};               //-5 to 110
  
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
