rm -rf build/*
cd build
sdcc ../src/main.c
if [ ! -f "./main.ihx" ];
then
    echo "编译失败！"
else
    echo "编译成功，开始上传!....."
    stcgal -P stc89 -p /dev/tty.wchusbserial1410 main.ihx
fi