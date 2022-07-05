#include<stdio.h>
int main()
{
	int no,i=2,flag=1;
	printf("Enter Number for check prime or not:->\n");
	scanf("%d",&no);
	while(i<no){
		if (no%i==0)
		{
			flag=0;
		}
		i++;
	}
	if (flag==1)
	{
		printf("%d is prime number",no);
	}
	else
	{
		printf("%d is not prime number",no);
	}
	return 0;
}