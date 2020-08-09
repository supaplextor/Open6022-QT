/**
  ******************************************************************************
  * @file    HT6022fw.c
  * @author  Rodrigo Pedroso Mendes
  * @email   rpm_2003_rpm@yahoo.com.br
  * @version V1.0
  * @date    04-14-2013
  * @brief   This file provides the HT6022 firmware header         
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HT6022FW_H
#define __HT6022FW_H

#ifdef __cplusplus
 extern "C" {
#endif



/** @addtogroup HT6022_Driver
  * @{
  */
/* Private define ------------------------------------------------------------*/ 
#define HT6022_FIRMWARE_SIZE 472

 /*

  $ lsusb | grep -i 602A
Bus 003 Device 033: ID 04b5:602a ROHM LSI Systems USA, LLC Hantek6022BL
Also seen:
$ lsusb | grep ...
Bus 003 Device 051: ID 04b5:602a ROHM LSI Systems USA, LLC DSO-6022BL
Bus 003 Device 013: ID 0925:3881 Lakeview Research Saleae Logic - See also https://sigrok.org/wiki/Saleae_Logic/Info
 */

#define HT6022_FIRMWARE_VENDOR_ID    0X04B4
// #define HT6022_FIRMWARE_VENDOR_ID    0X0924

#define HT6022_FIRMWARE_REQUEST_TYPE 0X40
#define HT6022_FIRMWARE_REQUEST      0XA0
#define HT6022_FIRMWARE_INDEX        0X00

/*Exported variables---------------------------------------------------------*/
extern unsigned char HT6022_Firmware[];

/**
  * @}
  */ 

#ifdef __cplusplus
	}
#endif

#endif

/****************************END OF FILE*********************************/
