#ifndef CONSTANTS_H
#define	CONSTANTS_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "mcc_generated_files/system/system.h"
    
//UART Output Enables
#define STD_OUTPUT
//#define DEBUG_OUTPUT
    
//Error codes for Calibration
#define NO_ERROR            0
#define POS_OFFSET_ERROR    1
#define NEG_OFFSET_ERROR    2
#define INFINITE_ERROR      3
#define OSCILLATING_ERROR   4

//Calibrate to this precision (# of LSBs)
#define ACCURACY 1    

#ifdef	__cplusplus
}
#endif

#endif	/* CONSTANTS_H */

