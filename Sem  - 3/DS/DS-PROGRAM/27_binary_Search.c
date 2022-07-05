#include <stdio.h>

int main()
{

	int a[10],n,temp,middle,search;

	printf("Enter Size of Array:->");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		printf("\nEnter %d elements Here:->",i+1);
		scanf("%d",&a[i]);
	}

	printf("Enter Search Elements:");
	scanf("%d",&search);

	middle=n/2;
	middle--;

	if (a[middle]==search)
	{
		printf("%d is Found.!",search);
	}
	else if(search<a[middle]){
		for (int i = 0; i < middle-1; ++i)
		{
			if (search==a[i])
			{
				printf("%d is Found.!",search);
			}
		}
	}
	else {
		for (int i = middle+1; i < n; ++i)
		{
			if (search==a[i])
			{
				printf("%d is Found.!",search);
			}
		}
	}

	return 0;
}