#include "derivative.h" 
#include "main.h"


int main(void)
{
	
	TPM_init_PWM(255,PS_64);
	TPM_CH_init();
	
	
	
	for(;;) 
	{	   
		set_TPM_CnV(140);
	}
	
	
}
