@echo off
echo =========================
echo.
echo welcome to use timing shutdown app
echo.
echo =========================
set /p time=please enter time
shutdown -s -f -t %time%
echo successfully set
pause