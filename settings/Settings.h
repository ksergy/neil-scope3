﻿/*************************************************************************************
*
Description :  NeilScope3 Settings header
Version     :  1.0.0
Date        :  7.12.2011
Author      :  Left Radio                          
Comments    :  
*
**************************************************************************************/

#ifndef __SETTINGS_H
#define __SETTINGS_H 

/* Includes ------------------------------------------------------------------*/	   
#include "main.h"
#include "stm32f10x.h"

/* Exported typedef -----------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define btn_POWER	  0

/* Exported variables --------------------------------------------------------*/
extern uint8_t err_I2C_flag;

/* Exported function --------------------------------------------------------*/
void LoadPreference(void);							// чтение сохранненых настроек
uint8_t SavePreference(void);						// сохраннение настроек
uint8_t ErasePreference(void);

uint8_t Settings_SaveParam(const SettingsParam_TypeDef* param);



#endif /* __SETTINGS_H */
/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

