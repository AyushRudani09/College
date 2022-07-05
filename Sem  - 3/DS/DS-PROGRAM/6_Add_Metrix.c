#include<stdio.h>
int main()
{
	int a[10],b[10],c[10];
	printf("Enter First array:");
	for (int i = 0; i<4; ++i)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter Second array:");
	for (int j = 0; j<4; ++j)
	{
		scanf("%d",&b[j]);
	}

	for (int i = 0; i < 4; ++i)
	{
		c[i]=a[i]+b[i];
		printf("%d",c[i]);
	}
	return 0;
}