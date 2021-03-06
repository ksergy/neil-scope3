/**
  ******************************************************************************
  * @file	 	IQueue.h
  * @author  	Left Radio
  * @version
  * @date
  * @brief		header
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _IQUEUE__H
#define _IQUEUE__H

/* Includes ------------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define CMD_MAX_SIZE		10
#define IQUEUE_SIZE			4

/* Exported macro ------------------------------------------------------------*/
/* Exported typedef ----------------------------------------------------------*/
typedef struct {
	Boolean IsEmpty;
	uint8_t Data[CMD_MAX_SIZE];
	uint8_t CMD_Index;
} IQueue_TypeDef;

/* Exported variables --------------------------------------------------------*/
/* Exported function ---------------------------------------------------------*/
void Host_IQueue_Initialization(void);
void Host_SetIQueue(uint8_t* data, uint8_t cmd_index);
IQueue_TypeDef* Host_GetIQueue(uint8_t index);
uint8_t Host_IQueue_GetEmptyIndex(void);
void Host_IQueue_Clear(uint8_t index);
void Host_IQueue_ClearAll(void);
int8_t Host_IQueue_GetWorkIQueue(void);



#endif /* _IQUEUE__H */
/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
