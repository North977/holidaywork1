@echo off
set line=----------------------------------------------------------------------------------------------------------------------
echo 输入文件所在路径
set /p b=
cd "%b%"
echo 输入文件名
set /p c=
echo %line%
echo 编译开始
cl "%c%"
echo %line%
if exist "guwen.exe" echo 编译成功
if not exist "guwen.exe" echo 编译失败
pause