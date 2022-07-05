#include<stdio.h>

int main()
{
	int a[10],n,temp;

	printf("Enter Size of Array:->");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		printf("\nEnter %d elements Here:->",i+1);
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}