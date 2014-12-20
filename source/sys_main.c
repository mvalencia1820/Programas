/** @file sys_main.c 
*   @brief Application main file
*   @date 17.Nov.2014
*   @version 04.02.00
*
*   This file contains an empty main function,
*   which can be used for the application.
*/

/* 
* Copyright (C) 2009-2014 Texas Instruments Incorporated - http://www.ti.com/ 
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/


/* USER CODE BEGIN (0) */
/* USER CODE END */

/* Include Files */

#include "sys_common.h"

/* USER CODE BEGIN (1) */
#include <stdio.h>
#include "gio.h"
#include "het.h"
#include "dcc.h"
#include "adc.h"
#include "GLCD.h"
#include <DSP.h>
#include "math.h"
/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
int capturaadc();
char Mensaje[40] = "";
char Mensaje2[40] = "";
char Mensaje3[40] = "";


short imaginaryNumbers[300];
short realNumbers[300];
float MagdB[260];
int yfft[200];

int Samples=256;
int soundref=50;
/* USER CODE END */

void main(void)
{
/* USER CODE BEGIN (3) */
		hetInit();
	    gioInit();
	    adcInit();

	    glcd_init(ON);
	    int ii,n,x,ymax=63;

	    while (1) {

	                    for (ii = 0; ii < Samples; ii++) {
	                        imaginaryNumbers[ii] = 0;
	                        realNumbers[ii] = capturaadc() - 1775;

	                        wait_secons(25e-6);
	                    }
	                    gst_spectrum_fix_fft(realNumbers, imaginaryNumbers,8, 0);

	                    for (n = 0; n < Samples/2; n++) {
	                        float root = sqrt(realNumbers[n] * realNumbers[n]+ imaginaryNumbers[n]* imaginaryNumbers[n]);

	                        if (root > 181.019)
	                            root = 181.019;

	                        MagdB[n] = root;
	                        yfft[n] = (int) MagdB[n] * 63 / 182;
	                    }


	                    int spec_value=ymax - yfft[3];



	                    if(spec_value<soundref)
	                    	gioSetBit(hetPORT1,22,1);		//Enable
	                    else
	                    	gioSetBit(hetPORT1,22,0);		//Enable


	                    spec_value=ymax - yfft[4];



	                    if(spec_value<soundref)
	                    	gioSetBit(hetPORT1,18,1);		//Enable
	                    else
	                    	gioSetBit(hetPORT1,18,0);		//Enable

	                    spec_value=ymax - yfft[5];



	                         if(spec_value<soundref)
	                        	 gioSetBit(gioPORTA,7,1);		//CS1
	                         else
	                        	 gioSetBit(gioPORTA,7,0);		//CS1


	 	                    spec_value=ymax - yfft[6];



	 	                         if(spec_value<soundref)
	 	                        	 gioSetBit(gioPORTA,6,1);		//CS1
	 	                         else
	 	                        	 gioSetBit(gioPORTA,6,0);		//CS1


	 	                         spec_value=ymax - yfft[7];

	 		                         if(spec_value<soundref)
	 		                        	 gioSetBit(gioPORTA,4,1);		//CS1
	 		                         else
	 		                        	 gioSetBit(gioPORTA,4,0);		//CS1

	 			                    spec_value=ymax - yfft[8];



	 			                    if(spec_value<soundref)
	 			                    	gioSetBit(hetPORT1,23,1);		//Enable
	 			                    else
	 			                    	gioSetBit(hetPORT1,23,0);		//Enable




	                    glcd_fillScreen(OFF);
	                    for (x = 0; x <Samples/2; x++) {
	                        //glcd_rect(x, ymax - yfft[x], x, 63, 1, 1);
	                        glcd_rect(2*x,ymax-yfft[x],1+2*x,63,1,1);
	                    }

	                    glcd_update();
	    }


/* USER CODE END */
}

/* USER CODE BEGIN (4) */

int capturaadc() {
    uint32 ch_count = 0;
    adcData_t adc_data[2];
    int adcchanel;

    adcStartConversion(adcREG1, adcGROUP1); 			//Start ADC conversio
    while (!adcIsConversionComplete(adcREG1, adcGROUP1))
        ;				// ConfigutaR halcogen el trigger por sofware

    ch_count = adcGetData(adcREG1, adcGROUP1, &adc_data[0]);
    ch_count = ch_count;
    adcchanel = adc_data[0].value;
    return adcchanel;
}


/* USER CODE END */
