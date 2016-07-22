/******************************************************************************
* File       : Task_PT_11xx_Test.c
* Function   : PT task for 11xx test
* description: To be done.           
* Version    : V1.00
* Author     : Ian
* Date       : 22nd May 2016
* History    :  No.  When           Who           What
*               1    22/Jul/2016    Ian           Create
******************************************************************************/

#include "type_def.h"
#include "common_head.h"
#include "project_config.h"
#include "MOE_Core.h"
#include "MOE_Event.h"
#include "MOE_Timer.h"
#include "MOE_Msg.h"
#include "MOE_PT.h"
#include "Task_PT_11xx_Test.h"
#include "debug.h"

static uint8 sg_u8TaskID = TASK_NO_TASK;

static void (*const TASK_PT_DEMO_LED_Off)(uint8 u8Clr)    = TASK_PT_DEMO_LED_OFF;
static void (*const TASK_PT_DEMO_LED_On)(uint8 u8Clr)     = TASK_PT_DEMO_LED_ON;
//static void (*const TASK_PT_DEMO_LED_Toggle)(uint8 u8Clr) = TASK_PT_DEMO_LED_TOGGLE;

/******************************************************************************
* Name       : uint8 Task_PT_11xx_Test(uint8 u8Evt)
* Function   : A test task for 11xx
* Input      : uint8 u8Evt  1~254     Event for the task
* Output:    : None
* Return     : SW_OK   Successful operation
*            : SW_ERR  Failed operation
*              1~254   Event which is not processed.
* description: To be done
* Version    : V1.00
* Author     : Ian
* Date       : 22nd Jul 2016
******************************************************************************/
uint8 Task_PT_11xx_Test(uint8 u8Evt)
{   
    PT_INIT();
    
    PT_BEGIN();

    /******************************************************************/
    MOE_MANDATORY_INIT();  /* Mandatory init, shout call it here only */
    /******************************************************************/

    while(1)
    {

    }

    PT_END();

    return SW_OK;

}

/* End of file */

