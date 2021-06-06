#fileName=教室红外灯
#fileName=lcd
fileName=main
#fileName=温度控制
#fileName=红外遥控
rm -rf build/*
cd build
sdcc ../src/$fileName.c
if [ ! -f "./$fileName.ihx" ];
then
    echo "编译失败！"
else
    echo "编译成功，开始上传!....."
    stcgal -P stc89 -p /dev/tty.wchusbserial1410 $fileName.ihx
fi