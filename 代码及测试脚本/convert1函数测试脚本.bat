@echo off
title 单元测试:convert0函数
set line=----------------------------------------------------------------------------------------------------------------------
cd "C:\Users\Q sea\source\repos\convert1\convert1"
cl convert1.cpp
echo %line%
echo 测试开始
convert1.exe
echo %line%
pause