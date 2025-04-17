;//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
;*/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000800

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp    


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000800

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit

                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size


__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               ; NMI Handler
                DCD     HardFault_Handler         ; Hard Fault Handler
                DCD     MemManage_Handler         ; MemManage Handler
                DCD     BusFault_Handler          ; BusFault Handler
                DCD     UsageFault_Handler        ; UsageFault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD   	DebugMonitor_Handler      ; DebugMonitor Handler
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     WWDT_IRQHandler            ; 0   WDT
                DCD     SVD_IRQHandler            ; 1   SVD
                DCD     RTC_IRQHandler            ; 2   RTC
                DCD     IWDT_IRQHandler           ; 3   IWDT				
                DCD     FLASH_IRQHandler          ; 4   FLASH
                DCD     CMU_IRQHandler            ; 5   CMU
                DCD     LFDET_IRQHandler          ; 6   LFDET
                DCD     MAP_ERR_IRQHandler        ; 7   MAP_ERR
                DCD     ADC_IRQHandler            ; 8   ADC
                DCD     DAC0_IRQHandler           ; 9   DAC0
                DCD     DAC1_IRQHandler           ; 10  DAC1
                DCD     SPI0_IRQHandler           ; 11  SPI0
                DCD     SPI1_IRQHandler           ; 12  SPI1
                DCD     SPI2_IRQHandler           ; 13  SPI2
                DCD     SPI3_IRQHandler           ; 14  SPI3
                DCD     SPI4_IRQHandler           ; 15  SPI4
                DCD     0                         ; 16 	Reserved
                DCD     0                         ; 17 	Reserved
                DCD     UART0_IRQHandler          ; 18  UART0
                DCD     UART1_IRQHandler          ; 19  UART1
                DCD     UART2_IRQHandler          ; 20  UART2
                DCD     UART3_IRQHandler          ; 21  UART3
                DCD     UART4_IRQHandler          ; 22  UART4				
                DCD     UART5_IRQHandler          ; 23  UART5
                DCD     UART6_IRQHandler          ; 24  UART6
                DCD     UART7_IRQHandler          ; 25  UART7
                DCD     0                         ; 26 	Reserved
                DCD     0                         ; 27 	Reserved
                DCD     0                         ; 28 	Reserved			
                DCD     LPUART0_IRQHandler        ; 29  LPUART0
                DCD     LPUART1_IRQHandler        ; 30  LPUART1
                DCD     0                         ; 31 	Reserved				
                DCD     EXTIA_IRQHandler          ; 32  EXTIA
				DCD     EXTIB_IRQHandler          ; 33  EXTIB
				DCD     EXTIC_IRQHandler          ; 34  EXTIC
				DCD     EXTID_IRQHandler          ; 35  EXTID
				DCD     EXTIE_IRQHandler          ; 36  EXTIE
				DCD     EXTIF_IRQHandler          ; 37  EXTIF
                DCD     I2CM0_IRQHandler          ; 38  I2CM0				
                DCD     I2CM1_IRQHandler          ; 39  I2CM1
                DCD     I2CSMB0_IRQHandler        ; 40  I2CSMB0
                DCD     I2CSMB1_IRQHandler        ; 41  I2CSMB1
                DCD     I2CSMB2_IRQHandler        ; 42  I2CSMB2
                DCD     0                         ; 43  Reserved
                DCD     0                         ; 44  Reserved				
                DCD     CCL_IRQHandler            ; 45  CCL
                DCD     AES_IRQHandler            ; 46  AES
                DCD     0                         ; 47  Reserved
                DCD     0                         ; 48  Reserved
                DCD     0                         ; 49  Reserved	
                DCD     DMA_IRQHandler            ; 50  DMA
                DCD     WKUPX_IRQHandler          ; 51  WKUPX
                DCD     LUT_IRQHandler            ; 52  LUT
                DCD     COMPX_IRQHandler          ; 53  COMPX
                DCD     FSCAN_IRQHandler          ; 54  FSCAN
                DCD     0                         ; 55  Reserved			
                DCD     FDCAN_IRQHandler          ; 56  FDCAN
                DCD     0                         ; 57  Reserved
                DCD     0                         ; 58  Reserved
                DCD     0                         ; 59  Reserved	
                DCD     LPTIM16_IRQHandler        ; 60  LPTIM16
                DCD     0                         ; 61  Reserved					
                DCD     BSTIM0_IRQHandler         ; 62  BSTIM0
                DCD     0                         ; 63  Reserved					
                DCD     ATIM0_IRQHandler          ; 64  ATIM0
                DCD     ATIM1_IRQHandler          ; 65  ATIM1
				DCD     0                         ; 66  Reserved
                DCD     0                         ; 67  Reserved
                DCD     GPTIM0_IRQHandler         ; 68  GPTIM0
                DCD     GPTIM1_IRQHandler         ; 69  GPTIM1
                DCD     GPTIM2_IRQHandler         ; 70  GPTIM2
				DCD     0                         ; 71  Reserved
                DCD     EPWM0_IRQHandler          ; 72  EPWM1
                DCD     EPWM0_TZ_IRQHandler       ; 73  EPWM1_TZ				
                DCD     EPWM1_IRQHandler          ; 74  EPWM2
                DCD     EPWM1_TZ_IRQHandler       ; 75  EPWM2_TZ	
                DCD     EPWM2_IRQHandler          ; 76  EPWM3
                DCD     EPWM2_TZ_IRQHandler       ; 77  EPWM3_TZ	
                DCD     EPWM3_IRQHandler          ; 78  EPWM4
                DCD     EPWM3_TZ_IRQHandler       ; 79  EPWM4_TZ					
				DCD     0                         ; 80  Reserved
                DCD     0                         ; 81  Reserved
                DCD     FPU_IRQHandler            ; 82  FPU				
                DCD     USB_IRQHandler            ; 83  USB
				DCD     0                         ; 84  Reserved
                DCD     EPSC_IRQHandler           ; 85  EPSC				

__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0        
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     		PROC
						EXPORT  NMI_Handler               [WEAK]
						B       .
						ENDP
HardFault_Handler 		PROC
						EXPORT  HardFault_Handler         [WEAK]
						B       .
						ENDP
MemManage_Handler		PROC
						EXPORT  MemManage_Handler         [WEAK]
						B       .
						ENDP
BusFault_Handler		PROC
						EXPORT  BusFault_Handler          [WEAK]
						B       .
						ENDP
UsageFault_Handler		PROC
						EXPORT  UsageFault_Handler        [WEAK]
						B       .
						ENDP
SVC_Handler     		PROC
						EXPORT  SVC_Handler               [WEAK]
						B       .
						ENDP
DebugMonitor_Handler    PROC
						EXPORT  DebugMonitor_Handler  	  [WEAK]
						B       .
						ENDP
PendSV_Handler  		PROC
						EXPORT  PendSV_Handler            [WEAK]
						B       .
						ENDP
SysTick_Handler 		PROC
						EXPORT  SysTick_Handler           [WEAK]
						B       .
						ENDP

Default_Handler PROC
                EXPORT  EPSC_IRQHandler            	[WEAK]
                EXPORT  USB_IRQHandler           	[WEAK]
                EXPORT  FPU_IRQHandler          	[WEAK]
                EXPORT  EPWM3_TZ_IRQHandler         [WEAK]
                EXPORT  EPWM3_IRQHandler         	[WEAK]
                EXPORT  EPWM2_TZ_IRQHandler         [WEAK]
                EXPORT  EPWM2_IRQHandler          	[WEAK]
                EXPORT  EPWM1_TZ_IRQHandler         [WEAK]
                EXPORT  EPWM1_IRQHandler        	[WEAK]
                EXPORT  EPWM0_TZ_IRQHandler        	[WEAK]
                EXPORT  EPWM0_IRQHandler        	[WEAK]
                EXPORT  GPTIM2_IRQHandler          	[WEAK]
                EXPORT  GPTIM1_IRQHandler          	[WEAK]
                EXPORT  GPTIM0_IRQHandler           [WEAK]
                EXPORT  ATIM1_IRQHandler          	[WEAK]
                EXPORT  ATIM0_IRQHandler            [WEAK]
                EXPORT  BSTIM0_IRQHandler          	[WEAK]
                EXPORT  LPTIM16_IRQHandler          [WEAK]
                EXPORT  FDCAN_IRQHandler           	[WEAK]
                EXPORT  FSCAN_IRQHandler            [WEAK]
                EXPORT  COMPX_IRQHandler            [WEAK]
                EXPORT  LUT_IRQHandler           	[WEAK]
                EXPORT  WKUPX_IRQHandler            [WEAK]
                EXPORT  DMA_IRQHandler          	[WEAK]
                EXPORT  AES_IRQHandler        		[WEAK]
                EXPORT  CCL_IRQHandler        		[WEAK]
                EXPORT  I2CSMB2_IRQHandler        	[WEAK]
                EXPORT  I2CSMB1_IRQHandler          [WEAK]
                EXPORT  I2CSMB0_IRQHandler          [WEAK]
                EXPORT  I2CM1_IRQHandler          	[WEAK]
                EXPORT  I2CM0_IRQHandler          	[WEAK]
                EXPORT  EXTIF_IRQHandler          	[WEAK]
                EXPORT  EXTIE_IRQHandler        	[WEAK]
                EXPORT  EXTID_IRQHandler          	[WEAK]
                EXPORT  EXTIC_IRQHandler          	[WEAK]
                EXPORT  EXTIB_IRQHandler          	[WEAK]
                EXPORT  EXTIA_IRQHandler          	[WEAK]
                EXPORT  LPUART1_IRQHandler          [WEAK]
                EXPORT  LPUART0_IRQHandler          [WEAK]
                EXPORT  UART7_IRQHandler          	[WEAK]
                EXPORT  UART6_IRQHandler          	[WEAK]
                EXPORT  UART5_IRQHandler           	[WEAK]
                EXPORT  UART4_IRQHandler           	[WEAK]
                EXPORT  UART3_IRQHandler           	[WEAK]
                EXPORT  UART2_IRQHandler           	[WEAK]
                EXPORT  UART1_IRQHandler            [WEAK]
                EXPORT  UART0_IRQHandler            [WEAK]
                EXPORT  SPI4_IRQHandler           	[WEAK]
                EXPORT  SPI3_IRQHandler          	[WEAK]
                EXPORT  SPI2_IRQHandler            	[WEAK]
                EXPORT  SPI1_IRQHandler            	[WEAK]
                EXPORT  SPI0_IRQHandler            	[WEAK]
                EXPORT  DAC1_IRQHandler          	[WEAK]
                EXPORT  DAC0_IRQHandler            	[WEAK]
                EXPORT  ADC_IRQHandler            	[WEAK]
                EXPORT  MAP_ERR_IRQHandler          [WEAK]				
                EXPORT  LFDET_IRQHandler            [WEAK]
                EXPORT  CMU_IRQHandler            	[WEAK]
                EXPORT  FLASH_IRQHandler            [WEAK]
                EXPORT  IWDT_IRQHandler          	[WEAK]
                EXPORT  RTC_IRQHandler            	[WEAK]
                EXPORT  SVD_IRQHandler            	[WEAK]
                EXPORT  WWDT_IRQHandler            	[WEAK]
EPSC_IRQHandler
USB_IRQHandler
FPU_IRQHandler
EPWM3_TZ_IRQHandler
EPWM3_IRQHandler
EPWM2_TZ_IRQHandler
EPWM2_IRQHandler
EPWM1_TZ_IRQHandler
EPWM1_IRQHandler
EPWM0_TZ_IRQHandler
EPWM0_IRQHandler
GPTIM2_IRQHandler
GPTIM1_IRQHandler
GPTIM0_IRQHandler
ATIM1_IRQHandler
ATIM0_IRQHandler
BSTIM0_IRQHandler
LPTIM16_IRQHandler
FDCAN_IRQHandler
FSCAN_IRQHandler
COMPX_IRQHandler
LUT_IRQHandler
WKUPX_IRQHandler
DMA_IRQHandler
AES_IRQHandler
CCL_IRQHandler
I2CSMB2_IRQHandler
I2CSMB1_IRQHandler
I2CSMB0_IRQHandler
I2CM1_IRQHandler
I2CM0_IRQHandler
EXTIF_IRQHandler
EXTIE_IRQHandler
EXTID_IRQHandler
EXTIC_IRQHandler
EXTIB_IRQHandler
EXTIA_IRQHandler
LPUART1_IRQHandler
LPUART0_IRQHandler
UART7_IRQHandler
UART6_IRQHandler
UART5_IRQHandler
UART4_IRQHandler
UART3_IRQHandler
UART2_IRQHandler
UART1_IRQHandler
UART0_IRQHandler
SPI4_IRQHandler
SPI3_IRQHandler
SPI2_IRQHandler
SPI1_IRQHandler
SPI0_IRQHandler
DAC1_IRQHandler
DAC0_IRQHandler
ADC_IRQHandler
MAP_ERR_IRQHandler
LFDET_IRQHandler
CMU_IRQHandler
FLASH_IRQHandler
IWDT_IRQHandler
RTC_IRQHandler
SVD_IRQHandler
WWDT_IRQHandler

                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                 LDR     R0, =  Heap_Mem
                 LDR     R1, =(Stack_Mem + Stack_Size)
                 LDR     R2, = (Heap_Mem +  Heap_Size)
                 LDR     R3, = Stack_Mem
                 BX      LR

                ALIGN

                ENDIF


                END
                    
 *****END OF FILE*****
