# Open6022-QT
Open Source software for the Hantek 6022BL DSO written in QT

Tested on Ubuntu 20.04 (incomplete, no signal?).

<img src="https://raw.githubusercontent.com/supaplextor/Open6022-QT/master/Screenshot%20from%202020-08-09%2007-32-11.png">

lsusb output below. Needs sudo to access lower level usb functions. Build with qtcreator.

<pre>
$ lsusb | grep -i 602A
Bus 003 Device 033: ID 04b5:602a ROHM LSI Systems USA, LLC Hantek6022BL 
Also seen:
$ lsusb | grep 3881
Bus 003 Device 013: ID 0925:3881 Lakeview Research Saleae Logic - See also <a href="https://sigrok.org/wiki/Saleae_Logic/Info">https://sigrok.org/wiki/Saleae_Logic/Info</a>
</pre>
