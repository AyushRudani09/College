#include <stdio.h>
int main()
{
	float bs,hra,da,gs;
	printf("enter basic salary");
	scanf("%f",&bs);
	if((bs>=10000)&&(bs>=20000))
	{
		hra=bs*0.20;
		da=bs*0.80;
		gs=hra+da+bs;
		printf("Gross salary %f",gs);
		}
	if((bs>=20000)&&(bs<=30000))
	{
		hra=bs*0.25;
		da=bs*0.90;
		gs=hra+da+bs;
		printf("Gross salary %f",gs);
	}
	if(bs>=30000)
	{
		hra=bs*0.30;
		da=bs*0.95;
		gs=hra+da+bs;
		printf("Gross salary %f",gs);
	}
	return 0;
	
		
}