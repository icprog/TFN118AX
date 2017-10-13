#ifndef MX_GPIO_
#define MX_GPIO_

#include "nrf.h"


#define		 PAH8011ET	
	#ifdef PAH8011ET
		#ifdef __TFN108

				#define PPG_INT_PIN_NUM 21
				#define GPIOTE_CHANNEL_PPG_INT									GPIOTE_CHANNEL_0
				#define Read_PPG ((NRF_GPIO->IN >> PPG_INT_PIN_NUM) & 1UL)
				#define IR_INT_PIN_NUM 24
				#define PAH8011_Power_PIN_NUM 7
				#define PAH8011_Power_Up   NRF_GPIO->OUTSET = (1UL << PAH8011_Power_PIN_NUM)  //高电平上电
				#define PAH8011_Power_Down NRF_GPIO->OUTCLR = (1UL << PAH8011_Power_PIN_NUM)		

				
			
    #else		

//			#define LED_pin_num 18//LOW -ON
//			#define LED_ON 	NRF_GPIO->OUTSET = (1UL << LED_pin_num)
//			#define LED_OFF 	NRF_GPIO->OUTCLR = (1UL << LED_pin_num)
//			
//			#define PPG_INT_PIN_NUM 5
//			#define GPIOTE_CHANNEL_PPG_INT									GPIOTE_CHANNEL_0
//			
//			#define PAH8011_PD_PIN_NUM 6
//			#define PAH8011_Power_Down  NRF_GPIO->OUTSET = (1UL << PAH8011_PD_PIN_NUM)
//			#define PAH8011_Power_Up NRF_GPIO->OUTCLR = (1UL << PAH8011_PD_PIN_NUM)		
		#endif
	#endif
			
			
#endif

