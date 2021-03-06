/**
  ******************************************************************************
  * @file	 	i2c.c
  * @author  	Left Radio
  * @version 	1.0.0
  * @date
  * @brief		NeilScope3 i2c Write/Read sourse
  ******************************************************************************
**/

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "i2c.h"
#include "User_Interface.h"
#include "systick.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/* Maximum Timeout values */
#define sEE_FLAG_TIMEOUT         ((uint32_t)0x1000)
#define sEE_LONG_TIMEOUT         ((uint32_t)(10 * sEE_FLAG_TIMEOUT))

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
uint8_t err_I2C_flag = 0;

/* Private function prototypes -----------------------------------------------*/
void Error_message(char* message_text);



/* Private functions ---------------------------------------------------------*/

/**
 * @brief  I2C_Write_Bytes
 * @param  None
 * @retval None
 */
int8_t I2C_Write_Bytes(uint8_t *Data, uint8_t len, uint8_t i2c_address)
{
    uint32_t sEETimeout = sEE_LONG_TIMEOUT;
    uint8_t i;
    err_I2C_flag = 0;

	// ��������� ����� �� ����
	I2C_GenerateSTART(I2C1, ENABLE);
	while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
    	if((sEETimeout--) == 0)	{
    		Error_message("I2C Timeout Generate START");
    		return -1;
    	}
  	}

	// �������� ������
	sEETimeout = sEE_LONG_TIMEOUT;
	I2C_Send7bitAddress(I2C1, i2c_address, I2C_Direction_Transmitter);
	while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED )) {
    	if((sEETimeout--) == 0)	{
    		Error_message("I2C Timeout Send7bitAddress");
    		return -1;
    	}
  	}

	for(i = 0; i < len; i++) {
		sEETimeout = sEE_LONG_TIMEOUT;

		I2C_SendData(I2C1, *(Data+i));
		while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED )) {
			if((sEETimeout--) == 0)	{
				Error_message("I2C Timeout Send MSB address");
				return - 1;
			}
		}
	}

	I2C_GenerateSTOP(I2C1, ENABLE);

	return 0;
}

/**
 * @brief  I2C_Read_Bytes
 * @param  None
 * @retval None
 */
int8_t I2C_Read_Bytes(uint8_t *Data, uint8_t len, uint8_t i2c_address)
{
	uint32_t sEETimeout = sEE_LONG_TIMEOUT;
    uint8_t i;
    err_I2C_flag = 0;

	//��������� ����� �� ����
	I2C_GenerateSTART(I2C1, ENABLE);
	while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
    	if(sEETimeout-- == 0) {
    		Error_message("I2C Timeout Generate START");
    		return - 1;
    	}
  	}

	/* �������� EEPROM ������ I2C */
	sEETimeout = sEE_LONG_TIMEOUT;
	I2C_Send7bitAddress(I2C1, i2c_address, I2C_Direction_Receiver);
	while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED)) {
    	if(sEETimeout-- == 0) {
    		Error_message("I2C Timeout Send7bitAddress");
    		return - 1;
    	}
  	}

	/* ����� ������ */
	for(i = 0; i < len; i++) {
		sEETimeout = sEE_LONG_TIMEOUT;

		while(!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_RECEIVED )) {
			if(sEETimeout-- == 0) {
				Error_message("I2C Timeout ReceiveData");
				return - 1;
			}
		}

		*(Data + i) = I2C_ReceiveData(I2C1);
	}

	I2C_GenerateSTOP(I2C1, ENABLE);

	return 0;
}

/**
 * @brief  Error_message
 * @param  None
 * @retval None
 */
void Error_message(char* message_text)
{
	if(gOSC_MODE.Configurated == TRUE) {

		uint16_t color = gMessage.Color;
		gMessage.Color = LightRed;
		Show_Message(message_text);
		gMessage.Color = color;

	}
}
