/*******************************************************************************
  System Initialization File

  File Name:
    initialization.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "configuration.h"
#include "definitions.h"


// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************
// <editor-fold defaultstate="collapsed" desc="DRV_USART Instance 0 Initialization Data">

DRV_USART_CLIENT_OBJ drvUSART0ClientObjPool[DRV_USART_CLIENTS_NUMBER_IDX0] = {0};

USART_PLIB_API drvUsart0PlibAPI = {
        .readCallbackRegister = (USART_ReadCallbackRegister)SERCOM4_USART_ReadCallbackRegister,
        .read = (USART_Read)SERCOM4_USART_Read,
        .readIsBusy = (USART_ReadIsBusy)SERCOM4_USART_ReadIsBusy,
        .readCountGet = (USART_ReadCountGet)SERCOM4_USART_ReadCountGet,
        .writeCallbackRegister = (USART_WriteCallbackRegister)SERCOM4_USART_WriteCallbackRegister,
        .write = (USART_Write)SERCOM4_USART_Write,
        .writeIsBusy = (USART_WriteIsBusy)SERCOM4_USART_WriteIsBusy,
        .writeCountGet = (USART_WriteCountGet)SERCOM4_USART_WriteCountGet,
        .errorGet = (USART_ErrorGet)SERCOM4_USART_ErrorGet,
        .serialSetup = (USART_SerialSetup)SERCOM4_USART_SerialSetup
};

uint32_t drvUsart0remapDataWidth[] = { 0x5, 0x6, 0x7, 0x0, 0x1 };
uint32_t drvUsart0remapParity[] = { 0x2, 0x80000, 0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };
uint32_t drvUsart0remapStopBits[] = { 0x0, 0xFFFFFFFF, 0x40 };
uint32_t drvUsart0remapError[] = { 0x4, 0x0, 0x2 };

DRV_USART_INIT drvUsart0InitData =
{
    .usartPlib = &drvUsart0PlibAPI,
    .remapDataWidth = drvUsart0remapDataWidth,
    .remapParity = drvUsart0remapParity,
    .remapStopBits = drvUsart0remapStopBits,
    .remapError = drvUsart0remapError,

    .dmaChannelTransmit = DRV_USART_XMIT_DMA_CH_IDX0,

    .usartTransmitAddress = (void *)&(SERCOM4_REGS->USART.DATA),

    .dmaChannelReceive = DRV_USART_RCV_DMA_CH_IDX0,

    .usartReceiveAddress = (void *)&(SERCOM4_REGS->USART.DATA),

    .numClients = DRV_USART_CLIENTS_NUMBER_IDX0,

    .clientObjPool = (uintptr_t)&drvUSART0ClientObjPool[0],

};

// </editor-fold>
// <editor-fold defaultstate="collapsed" desc="DRV_USART Instance 1 Initialization Data">

DRV_USART_CLIENT_OBJ drvUSART1ClientObjPool[DRV_USART_CLIENTS_NUMBER_IDX1] = {0};

USART_PLIB_API drvUsart1PlibAPI = {
        .readCallbackRegister = (USART_ReadCallbackRegister)SERCOM2_USART_ReadCallbackRegister,
        .read = (USART_Read)SERCOM2_USART_Read,
        .readIsBusy = (USART_ReadIsBusy)SERCOM2_USART_ReadIsBusy,
        .readCountGet = (USART_ReadCountGet)SERCOM2_USART_ReadCountGet,
        .writeCallbackRegister = (USART_WriteCallbackRegister)SERCOM2_USART_WriteCallbackRegister,
        .write = (USART_Write)SERCOM2_USART_Write,
        .writeIsBusy = (USART_WriteIsBusy)SERCOM2_USART_WriteIsBusy,
        .writeCountGet = (USART_WriteCountGet)SERCOM2_USART_WriteCountGet,
        .errorGet = (USART_ErrorGet)SERCOM2_USART_ErrorGet,
        .serialSetup = (USART_SerialSetup)SERCOM2_USART_SerialSetup
};

uint32_t drvUsart1remapDataWidth[] = { 0x5, 0x6, 0x7, 0x0, 0x1 };
uint32_t drvUsart1remapParity[] = { 0x2, 0x80000, 0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };
uint32_t drvUsart1remapStopBits[] = { 0x0, 0xFFFFFFFF, 0x40 };
uint32_t drvUsart1remapError[] = { 0x4, 0x0, 0x2 };

DRV_USART_INIT drvUsart1InitData =
{
    .usartPlib = &drvUsart1PlibAPI,
    .remapDataWidth = drvUsart1remapDataWidth,
    .remapParity = drvUsart1remapParity,
    .remapStopBits = drvUsart1remapStopBits,
    .remapError = drvUsart1remapError,

    .dmaChannelTransmit = DRV_USART_XMIT_DMA_CH_IDX1,

    .usartTransmitAddress = (void *)&(SERCOM2_REGS->USART.DATA),

    .dmaChannelReceive = DRV_USART_RCV_DMA_CH_IDX1,

    .usartReceiveAddress = (void *)&(SERCOM2_REGS->USART.DATA),

    .numClients = DRV_USART_CLIENTS_NUMBER_IDX0,

    .clientObjPool = (uintptr_t)&drvUSART1ClientObjPool[0],

};

// </editor-fold>


// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************
/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;
// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************


/*******************************************************************************
  Function:
    void SYS_Initialize ( void *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
 */

void SYS_Initialize ( void* data )
{
    PORT_Initialize();

    CLOCK_Initialize();



    NVIC_Initialize();
    DMAC_Initialize();

	BSP_Initialize();
    SERCOM2_USART_Initialize();

    SERCOM4_USART_Initialize();


    sysObj.drvUsart0 = DRV_USART_Initialize(DRV_USART_INDEX_0, (SYS_MODULE_INIT *)&drvUsart0InitData);

    sysObj.drvUsart1 = DRV_USART_Initialize(DRV_USART_INDEX_1, (SYS_MODULE_INIT *)&drvUsart1InitData);




    APP_USART_USB_CLICK_BOARD_Initialize();
    APP_USART_USB_DEBUG_PORT_Initialize();


}


/*******************************************************************************
 End of File
*/

