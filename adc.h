#ifndef _adc_h
#define _adc_h 1

#define ADC0 0x00  //measure OTG_VUSB_5V1   1/2
#define ADC1 0x01  //measure ACC2_5V1		1/2
#define ADC2 0x02  //检测VBAT是否短接到GND

#define ADC3 0x03  //检测AccessoryPort是否短接
#define ADC4 0x04	//Audio进行FFT分析ADC转换
#define ADC5 0x05	//measure VCC1  

#define ADC6 0x06   //量测Audio的HS_DETECT的电压
#define ADC7 0x07   //量测Audio的AUDIO_GPIO1_A的电压

unsigned int ADC_read(unsigned char channel);
unsigned int ADC_convert(unsigned int temp);
void OutputCurrent(char flag);
void adc_init(void);

#endif
