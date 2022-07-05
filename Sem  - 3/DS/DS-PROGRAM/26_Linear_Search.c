#include<stdio.h>
int main()
{
	int a[100],n,search,flag=0;
	printf("Enter Size of Array:->");
	scanf("%d",&n);

	printf("Enter Array Elements:->");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter Search Elements:");
	scanf("%d",&search);

	for (int i = 0; i < n; ++i)
	{
		if (a[i]==search)
		{
			printf("%d is Available in Position:->%d",search,i+1);
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("%d is not Found.!",search);
	}
	return 0;
}