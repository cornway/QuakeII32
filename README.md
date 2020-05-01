# QuakeII32
Quake 2 port for stm32xx boards

# How to build

```
root dir (that repo) :
                       /ulib/ (https://github.com/cornway/ulib)
                       /Quake 2/ (https://github.com/cornway/Quake-2)
```
```
For Keil: use application-sram target (actually will be used internal flash memory not sram due image size)
```
Now only Keil MDK and stm32f769disco board are supported;\
Note: Not finished yet. It is not possible to build a stand-alone firmware (so far),
but only as application for IAP driver (https://github.com/cornway/stm327xx_iap)
