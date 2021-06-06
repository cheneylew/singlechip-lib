#include "define.h"

/*串口初始化配置*/
void UartConfiguration()
{
    TMOD=0x20;      //设置计数器1的工作方式2
    TH1=0xfd;	    //设置计数器1的初值，决定波特率
    TL1=0xfd;		//设置计数器1的初值，决定波特率
    PCON=0x00;      // 波特率倍增0x00不加倍	 0x80加倍
    SCON=0x50;		//设置工作方式1 开启接受允许
    EA=1;		    //开启总中断
    ES=1;			//开启串口接受中断
    TR1=1;			//计数器1开始运行
}
/*发送数据*/
void sendDate(char date)
{
    SBUF=date;		  //接收到的数据放入发送缓存器发送
    while(!TI);       //等待发送数据完成
    TI=0;			  //清除发送完成标志位
}

/*主函数*/
void main()
{
    UartConfiguration();

    sendDate('1');  //发送字符1

    while(1);
}

/*中断函数*/
void Uart() interrupt 4
{
uchar date;
date=SBUF;        //取出接受到的数据
RI=0;			  //清除接受中断标志位

//收到的数据是date

}