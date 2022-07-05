#include<stdio.h>
int main()	
{
	int a,b,c[50];
	int i;
	printf("enter a number : ");
	scanf("%d",&a);
	i=a;
	int sum=0;
	while(i>0)
	{
		b=i%10;
		i=i/10;
		sum=sum+b;
		// j++;
	}
	printf("%d",sum);
}
	
