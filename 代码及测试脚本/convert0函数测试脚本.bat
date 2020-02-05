@echo off
title 单元测试:convert0函数
set line=----------------------------------------------------------------------------------------------------------------------
cd "C:\Users\Q sea\source\repos\convert0\convert0"
cl convert0.cpp
echo %line%
echo 测试开始
convert0.exe
echo %line%
pause