#ifndef OPAMPUTILITIES_H
#define	OPAMPUTILITIES_H

#ifdef	__cplusplus
extern "C" {
#endif

//Set the offset register
#define OPAMP_SetInputOffset(x) OPA1OFFSET = x

//Enable / Disable Unity Gain
#define OPAMP_EnableUnityGain() OPA1CON0bits.UG = 0b1
#define OPAMP_DisableUnityGain() OPA1CON0bits.UG = 0b0

#define OPAMP_SetNegativeChannel(x) OPA1CON2bits.NCH = x

    typedef enum {
        NO_CONNECTION = 0b000, GSEL = 0b001
    } OPAMP_NEGATIVE_CHANNEL;
    
#ifdef	__cplusplus
}
#endif

#endif	/* OPAMPUTILITIES_H */

