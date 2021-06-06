#include "define.h"

sbit AD_P1_0 GM;	//光敏
sbit AD_P1_6 hw;	//人体红外
sbit AD_P3_4 relay;	//继电器控制灯
sbit AD_P1_5 yellow;  //红外指示灯
sbit AD_P2_0 test;  //测试指示灯

void delay_1ms(uint x)//延时函数
{
    uint i,j;
    for(i=0;i<x;i++)
        for(j=0;j<120;j++);
}

void work()//工作函数
{
    static uchar value,miao;
    if(GM==0)//光敏（晚上）
    {
        delay_1ms(20);//延时20ms
        if(GM==0)//确定是晚上
        {
            if(hw==1)//感应到人体
            {
                relay=0;//继电器吸合
                miao = 0;
                value = 0;
            }
        }
    }
    if(relay == 0)    //继电器吸合 计时10秒
    {
        value ++;
        if(value >= 5)
        {
            value = 0;
            miao ++;
            if(miao >= 10)	  //10秒的时间
            {
                miao = 0;
                relay = 1;    //关闭继电器
            }
        }
    }
}

void main()//主函数
{
    hw = 0;
    delay_1ms(500);//延时500ms
    P0 = P1 = P2 = P3 = 0XFF;
    while(1)//循环
    {
        work();//调用工作函数
        if (hw == 1) {
            yellow = 0;
        } else {
            yellow = 1;
        }
        delay_1ms(100);   //100ms
        if(hw == 1) {
            test = 0;
        } else {
            test = 1;
        }
    }
}