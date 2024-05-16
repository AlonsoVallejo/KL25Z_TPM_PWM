/*
 * tpm.c
 *
 *  Created on: Jul 16, 2013
 *      Author: B34443
 */

#include "main.h"

void TPM_init_PWM(int PERIODO, int PS)
{
	SIM_SCGC5 = SIM_SCGC5_PORTE_MASK;
	
	SIM_SCGC6 |= SIM_SCGC6_TPM0_MASK;
	SIM_SOPT2 |= SIM_SOPT2_TPMSRC(1);
	
	PORTE_PCR29 = PORT_PCR_MUX(3);
	
	TPM0_MOD =  PERIODO;
	TPM0_SC |= TPM_SC_CPWMS_MASK|TPM_SC_CMOD(TPM_CLK)|TPM_SC_PS(PS);
	
	
	
}

void TPM_CH_init(void)
{
	TPM0_C2SC |= TPM_PWM_H ;
}

void set_TPM_CnV(int value)
{
	TPM0_C2V = value;
}

