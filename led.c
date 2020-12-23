
#include "led.h"

void LED_on(LED_pin led)
{
	switch(led)
	{
		case LEDY_RANGING:
			LED_Y_Reset();
			break;
		case LEDG_SYNC:
			LED_G_Reset();
			break;
		case LEDB_MODE:
			LED_B_Reset();
			break;
		default:
			break;
	}
}

void LED_off(LED_pin led)
{
	switch(led)
	{
		case LEDY_RANGING:
			LED_Y_Set();
			break;
		case LEDG_SYNC:
			LED_G_Set();
			break;
		case LEDB_MODE:
			LED_B_Set();
			break;
		default:
			break;
	}
}

void LED_toggle(LED_pin led)
{
	switch(led)
	{
		case LEDY_RANGING:
			LED_Y_Toggle();
			break;
		case LEDG_SYNC:
			LED_G_Toggle();
			break;
		case LEDB_MODE:
			LED_B_Toggle();
			break;
		default:
			break;
	}
}

//void LED_flashing(LED_pin led)
//{
//	switch(led)
//	{
//		case LEDY_RANGING:
//			LED_Y_Toggle();
//			HAL_Delay(1000);
//			LED_Y_Toggle();
//			HAL_Delay(1000);
//			LED_Y_Toggle();
//			break;
//		case LEDG_SYNC:
//			LED_G_Toggle();
//			HAL_Delay(1000);
//			LED_G_Toggle();
//			HAL_Delay(1000);
//			LED_G_Toggle();
//			break;
//		case LEDB_MODE:
//			LED_B_Toggle();
//			HAL_Delay(1000);
//			LED_B_Toggle();
//			HAL_Delay(1000);
//			LED_B_Toggle();
//			break;
//		default:
//			break;
//	}
//}


