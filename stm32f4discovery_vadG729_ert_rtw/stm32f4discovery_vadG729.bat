cd .

if "%1"=="" ("D:\MATLAB~1\bin\win64\gmake"  -f stm32f4discovery_vadG729.mk all) else ("D:\MATLAB~1\bin\win64\gmake"  -f stm32f4discovery_vadG729.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
