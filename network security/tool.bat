@echo off
title snake
:menu cls
echo ==========================
echo.
echo menu
echo 1.Timing shutdown
echo 2.Check your ip
echo 3.Exit
echo.
echo ==========================

set /p num=please enter number
if "%num%"=="1" goto a
if "%num%"=="2" goto b
if "%num%"=="3" goto c

echo please enter correct number(1/2/3),press any key to contiue...
pause
goto menu

a:
set /p time=please enter time
shutdown -s -f -t %time%
echo successfully set
pause
goto menu

b:
ipconfig
echo press any key to contiue
pause
goto menu

c:
exit