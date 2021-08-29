1. Build in windoen
    Note:       C:\msys32\home\theli\esp8266\my_project
    sake='cd esp8266/my_project'
    sakenew='cd esp8266/my_project/Sake-FWCore-New'
    run_bash_script='bash bash_script.sh'
    run_build='make menuconfig; make flash ESPPORT=COM8; make monitor ESPPORT=COM8'
    run_debug='run_bash_script'
    rb='make menuconfig'
    runmkp1='make flash ESPPORT=COM1;make monitor ESPPORT=COM1'
    runmkp2='make flash ESPPORT=COM2;make monitor ESPPORT=COM2'
    runmkp3='make flash ESPPORT=COM3;make monitor ESPPORT=COM3'
    runmkp4='make flash ESPPORT=COM4;make monitor ESPPORT=COM4'
    runmkp5='make flash ESPPORT=COM5;make monitor ESPPORT=COM5'
    runmkp6='make flash ESPPORT=COM6;make monitor ESPPORT=COM6'
    runmkp7='make flash ESPPORT=COM7;make monitor ESPPORT=COM7'
    runmkp8='make flash ESPPORT=COM8;make monitor ESPPORT=COM8'
    runmkp9='make flash ESPPORT=COM9;make monitor ESPPORT=COM9'
    runmkp10='make flash ESPPORT=COM10;make monitor ESPPORT=COM10'
    runmkp11='make flash ESPPORT=COM11;make monitor ESPPORT=COM11'
    runmkp12='make flash ESPPORT=COM12;make monitor ESPPORT=COM12'
    runmkp13='make flash ESPPORT=COM13;make monitor ESPPORT=COM13'
    make flash ESPPORT=COM20 && make monitor ESPPORT=COM20
    action='sake;run_debug'
    dh='make flash ESPPORT=COM8; make monitor ESPPORT=COM8'

    " make flash ESPPORT=COM9 && make monitor ESPPORT=COM9 "

2. Build in Linux