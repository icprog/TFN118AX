//app_init.h
#include "stdint.h"
#include "nrf51.h"
#include "nrf51_bitfields.h"
#include "nrf_delay.h"
#include "string.h"


#define IO_OFF_I 	17 //硬件拉低
#define	KEY				25     //26
#define LED				10
#define IO_OFF_D 	1   //默认输出高电平
//充电指示
#define USB_CHR_Pin_Num  6
#define Read_CHR	((NRF_GPIO->IN >> USB_CHR_Pin_Num)&1)    //0:表示正在充电
//#define SSR_PWREN	28
//#define SENSOR_IN	23
#define IO_INPUT  	0X00000000
#define GPIO_INVALID	0x00000002//引脚无效，关至最低功耗
#define OFF_SEC_DELAY													40	//佩戴后心率启动延时


typedef enum
{
    APP_IRQ_PRIORITY_HIGHEST = 0,
    APP_IRQ_PRIORITY_HIGH    = 1,
    APP_IRQ_PRIORITY_MID     = 2,
    APP_IRQ_PRIORITY_LOW     = 3
} app_irq_priority_t;

typedef enum{
	LEVEL_IDLE = 0,
	LEVEL_RADIO,
}run_level_t;

typedef struct
{
	uint8_t CHR_Flag;//1:表示正在充电   0:表示未在充电
	uint8_t Bat_Full;//1:已充满
	uint8_t Port_IT_CHR;//中断次数
}chr_typedef;

#define RADIO_PRIORITY		APP_IRQ_PRIORITY_MID
#define RTC_PRIORITY		APP_IRQ_PRIORITY_HIGH

#define TIM_PRIORITY      APP_IRQ_PRIORITY_HIGHEST
#define PORT_PRIORITY     APP_IRQ_PRIORITY_HIGHEST

#define DAY_TIME												86400				//一天秒数		

void rtc_Init(void);
void radio_Init(void);
void Osc_LFCLK(void);
void power_Init(void);
void timer_Init(void);
void CHR_IntEvent(void);
void chr_interrupt_config(void);
void Bat_Detect(void);
//FILE END
