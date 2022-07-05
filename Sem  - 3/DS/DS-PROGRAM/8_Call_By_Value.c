#include<stdio.h>
void swap(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int no1,no2;
	printf("Enter First Number:");
	scanf("%d",&no1);
	printf("Enter Second Number:");
	scanf("%d",&no2);
	swap(no1,no2);
	printf("Value of First Number is %d and second number is %d",no1,no2 );
	return 0;
}