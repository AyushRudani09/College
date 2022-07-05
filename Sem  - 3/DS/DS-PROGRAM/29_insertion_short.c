#include <stdio.h>

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
		for (int j = i+1; j>=0; j--)
		{
			if (a[j]<a[j-1] && j!=0)
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}