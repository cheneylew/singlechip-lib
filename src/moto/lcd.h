#ifndef __LCD_H_
#define __LCD_H_
/**********************************
当使用的是4位数据传输的时候定义，
使用8位取消这个定义
**********************************/
//#define LCD1602_4PINS

/**********************************
包含头文件
**********************************/
#include "../define.h"

//---重定义关键词---//
#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint
#define uint unsigned int
#endif

/**********************************
PIN口定义
**********************************/
#define LCD1602_DATAPINS P0
sbit AD_P2_7 LCD1602_E;
sbit AD_P2_5 LCD1602_RW;
sbit AD_P2_6 LCD1602_RS;

/**********************************
函数声明
**********************************/
/*在51单片机12MHZ时钟下的延时函数*/
void Lcd1602_Delay1ms(uint c);   //误差 0us
/*LCD1602写入8位命令子函数*/
void LcdWriteCom(uchar com);
/*LCD1602写入8位数据子函数*/
void LcdWriteData(uchar dat);
/*LCD1602初始化子程序*/
void LcdInit();
void Display_Standby();

void Display_str_Password();
void Display_result(bit rt);
void Display_Password(unsigned char i);
void ShowString (unsigned char Coordinate,char *ptr);

#endif
