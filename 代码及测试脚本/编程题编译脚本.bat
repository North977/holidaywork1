@echo off
set line=----------------------------------------------------------------------------------------------------------------------
echo �����ļ�����·��
set /p b=
cd "%b%"
echo �����ļ���
set /p c=
echo %line%
echo ���뿪ʼ
cl "%c%"
echo %line%
if exist "guwen.exe" echo ����ɹ�
if not exist "guwen.exe" echo ����ʧ��
pause