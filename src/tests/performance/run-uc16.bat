@echo off
rem 
rem %1 - Working copy (e.g. c:\g2) 
rem      or installed version (e.g. "C:\Program Files (x86)\Gensym\g2-8.3r1") 
rem      home directory
rem %2 - nonempty argument means to run performance test against installer 
rem      (e.g. installer)
rem 

setlocal

set UC_ID=uc16
set UC_KB=dalkia-2.kb 
set UC_ITERATIONS=100
set UC_SHUTDOWN=true

call run-uc.bat %1 %2
