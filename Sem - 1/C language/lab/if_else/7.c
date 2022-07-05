#include<stdio.h>
void main()
{
	int maths,phy, Eng, Hindi,Guj;
	printf("enter maths");
	scanf("%d",&maths);
	printf("enter phy");
	scanf("%d",&phy);
	printf("enter Eng");
	scanf("%d",& Eng);
	printf("enter Hindi");
	scanf("%d",& Hindi);
	printf("enter Guj");
	scanf("%d",&Guj);
	int pre=((maths+phy+Eng+Hindi+Guj)/5);
	printf("pre : %d%% \n",pre);
	{
	if((pre>0)&&(pre<=35))
	{
		printf("fail");
	}
	else
	{
		if((pre>35)&&(pre<=45))
		{
			printf("pass");
		}
		else
		{
			if((pre>45)&&(pre<=65))
			{
				printf("secondary class");
			}
			else
			{
				if((pre>65)&&(pre<=70))
				{
					printf("first class");
				}
				else{
					printf("very good");
				}
			}		
			}	
			}	
		}
}