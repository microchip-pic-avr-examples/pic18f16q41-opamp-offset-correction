#ifndef CALIBRATION_H
#define	CALIBRATION_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>    
#include "mcc_generated_files/system/system.h"
    
    //Run calibration routine
    void runCalibration(void);
    
    //Internal functions - can be reused
    void captureADC(adcc_channel_t ch);

#ifdef	__cplusplus
}
#endif

#endif	/* CALIBRATION_H */

