* OpenHantek - https://github.com/OpenHantek/OpenHantek6022/releases/tag/3.1.2

<pre>
supaplex@supaplex-N56JR:~/usr/src/build-Open6022-QT-Desktop-Debug$ OpenHantek 
^C
supaplex@supaplex-N56JR:~/usr/src/build-Open6022-QT-Desktop-Debug$ sudo ./Open6022-QT 
[sudo] password for supaplex: 
QStandardPaths: XDG_RUNTIME_DIR not set, defaulting to '/tmp/runtime-root'
../Open6022-QT/HT6022.c 144: libusb_init(NULL) == 0
../Open6022-QT/HT6022.c 181: libusb_open_device_with_vid_pid(NULL,0925,3881) = 00000000
../Open6022-QT/HT6022.c 185: HT6022_ERROR_NO_DEVICE (one attempt of two)
../Open6022-QT/HT6022.c 188: libusb_open_device_with_vid_pid(NULL,0924,3881) = 00000000
../Open6022-QT/HT6022.c 191: HT6022_ERROR_NO_DEVICE (attempt two of two)
../Open6022-QT/mainwindow.cpp 84 : Unable to communicate with USB device. exit code 252
supaplex@supaplex-N56JR:~/usr/src/build-Open6022-QT-Desktop-Debug$ OpenHantek 
^C
</pre>
