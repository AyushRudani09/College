#include<stdio.h>
int main()
{
	int no,fact=1;
	printf("Enter Number for Factorial:->");
	scanf("%d",&no);
	while(no>0)
	{
		fact=fact*no;
		no--;
	}
	printf("Factorial is:->%d", fact);
}