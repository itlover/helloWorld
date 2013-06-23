#ifndef _adc_h
#define _adc_h 1

#define ADC0 0x00  //measure OTG_VUSB_5V1   1/2
#define ADC1 0x01  //measure ACC2_5V1		1/2
#define ADC2 0x02  //���VBAT�Ƿ�̽ӵ�GND

#define ADC3 0x03  //���AccessoryPort�Ƿ�̽�
#define ADC4 0x04	//Audio����FFT����ADCת��
#define ADC5 0x05	//measure VCC1  

#define ADC6 0x06   //����Audio��HS_DETECT�ĵ�ѹ
#define ADC7 0x07   //����Audio��AUDIO_GPIO1_A�ĵ�ѹ

unsigned int ADC_read(unsigned char channel);
unsigned int ADC_convert(unsigned int temp);
void OutputCurrent(char flag);
void adc_init(void);

#endif
