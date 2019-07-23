

/**********************************************************************************************************************
* MODULES USED 
**********************************************************************************************************************/
#include "LED.h"
#include "LED_ORG.h"
#include "LED_YEL.h"
#include "LED_GR.h"
#include "LED_RED.h"

/**********************************************************************************************************************
* DEFINITIONS AND MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
* TYPEDEFS AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
* PROTOTYPES OF FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
* DECLARATIONS OF VARIABLES
**********************************************************************************************************************/


/*--------------------------------------------------------------------------*/
/* Function  | TASK of LED Control                                          */
/* Name      | Task_LED                                                     */
/*--------------------------------------------------------------------------*/
/* Parameter | Nothing                                                      */
/* Return    | Nothing                                                      */
/*--------------------------------------------------------------------------*/
void Task_LED(void)
{
	static uint16_t count = 0;
	
    count++;
    
    if (0 == (count%50))
    {
    	LED_ORG_NegVal();
    }
    
    if (0 == (count%100))
    {
    	LED_ORG_NegVal();
    	LED_YEL_NegVal();
    }
    
    if (0 == (count%200))
    {
    	LED_ORG_NegVal();
    	LED_YEL_NegVal();
    	LED_GR_NegVal();
    }
    
    if (0 == (count%400))
    {
    	LED_ORG_NegVal();
    	LED_YEL_NegVal();
    	LED_GR_NegVal();
    	LED_RED_NegVal();
    }
    
    if (0 == (count%800))
    {
    	count = 0;
    }
}


