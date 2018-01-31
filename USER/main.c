
/**
  ******************************************************************************
  * @file    Project/STM32F2xx_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V1.1.0
  * @date    13-April-2012
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */ 

#ifndef _MAIN_C_
#define _MAIN_C_

/* Includes ------------------------------------------------------------------*/
#include "includes.h"

#include "trace.h"
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/



/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
#if defined(_USE_UCOS_FTR_)

    OSInit();
    init_app_start_task();
    OSStart();

#else

    // Here, do no uC/OS-II application
    //...
    for (;;);

#endif /* _USE_UCOS_FTR_ */

	return 0;
}


/**
  * @}
  */
#endif /* _MAIN_C_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/