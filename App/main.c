#include "..\Mcal\Inc\Dio.h"


int main(void)
{
	Dio_Init(F,pin1,output);
	
	while(1)
	{

	}
	
	return 0;
}

void TIMER1A_Handler (void)
{ 
	if(TIMER1_MIS_R & 0x1)
		Dio_FlipChannel(F,pin1);
	TIMER1_ICR_R=1;
}