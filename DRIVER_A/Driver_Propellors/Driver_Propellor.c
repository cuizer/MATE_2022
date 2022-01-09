/**
  ******************************************************************************
  * @file            Driver_Propellor.c
  * @brief           ���ļ������ƽ�������ع�����ʵ��.
  ******************************************************************************
  * @revision				
	*										v1.0	:	2022.1�״η���
  *
  *	@Contributor			DogeYellow
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "Driver_Propellor.h"

/* Private typedef -----------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


/* Private constants ---------------------------------------------------------*/
#define DutyIDLE 1500

/* Private function prototypes -----------------------------------------------*/


/**
  * @brief		�ƽ����ٶ����ú���
  * @param		Speed : PROP_DutyTypeDef�ṹ��ָ�룬��Task�����
  * @retval		None
	* @note			���ڼƻ���ư�ȫģʽ���
  */
void PROP_SpeedSet(PROP_DutyTypeDef* Speed) 
{
	__HAL_TIM_SetCompare(&HFL_TIM, HFL_Channel, DutyIDLE+Speed->HFL);
	__HAL_TIM_SetCompare(&HFR_TIM, HFR_Channel, DutyIDLE+Speed->HFR);
	__HAL_TIM_SetCompare(&HBL_TIM, HBL_Channel, DutyIDLE+Speed->HBL);
	__HAL_TIM_SetCompare(&HBR_TIM, HBR_Channel, DutyIDLE+Speed->HBR);
	__HAL_TIM_SetCompare(&VFL_TIM, VFL_Channel, DutyIDLE+Speed->VFL);
	__HAL_TIM_SetCompare(&VFR_TIM, VFR_Channel, DutyIDLE+Speed->VFR);
	__HAL_TIM_SetCompare(&VBL_TIM, VBL_Channel, DutyIDLE+Speed->VBL);
	__HAL_TIM_SetCompare(&VBR_TIM, VBR_Channel, DutyIDLE+Speed->VBR);

}

/**
  * @brief		�ƽ����������ú���
  * @param		None
  * @retval		None
	* @note			���ڼƻ���ư�ȫģʽ���
  */
void PROP_IDLE(void) 
{
	__HAL_TIM_SetCompare(&HFL_TIM, HFL_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&HFR_TIM, HFR_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&HBL_TIM, HBL_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&HBR_TIM, HBR_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&VFL_TIM, VFL_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&VFR_TIM, VFR_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&VBL_TIM, VBL_Channel, DutyIDLE);
	__HAL_TIM_SetCompare(&VBR_TIM, VBR_Channel, DutyIDLE);
}
