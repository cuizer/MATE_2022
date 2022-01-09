/**
  ******************************************************************************
  * @file           : bsp_CallBacks.h
  * @brief          : bsp_CallBacks.c ͷ�ļ�
  *                   ���ļ��������Ӳ���ж� CallBack Functions �Ľӿ����.
  ******************************************************************************
  * @revision				:
	*										v1.0	:	2022.1�״η���
  *
  *	@Contributor		:	DogeYellow
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef BSP_CALLBACKS_H
#define BSP_CALLBACKS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
/* ����ϵͳ��Դ����ͷ�ļ� */
#include "RTOS.h"
/* GPIO��������ͷ�ļ� */
#include "main.h"
/* BSP�㶨��ͷ�ļ� */
#include "bspConfig.h"


/* Exported types ------------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/


/* Exported variables --------------------------------------------------------*/
extern UART_DataTypeDef UART_RX1 ;
extern UART_DataTypeDef UART_RX2 ;
extern UART_DataTypeDef UART_RX3 ;
extern UART_DataTypeDef UART_RX6 ;

/* Exported macro ------------------------------------------------------------*/


/* Exported functions prototypes ---------------------------------------------*/
void UartIDLE_Callback(UART_HandleTypeDef* huart, UART_DataTypeDef* Data) ;

/* Private defines -----------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* BSP_CALLBACKS_H */
