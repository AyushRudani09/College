#include<stdio.h>
int main()	
{
	long a,b,c[50],d=0,k,j=0;
	long i;
	printf("enter a number : ");
	scanf("%ld",&a);
	i=a;
	while(i>0)
	{
		b=i%10;
		// printf("%d\n",b);
		c[j]=b;
		i=i/10;
		j++;
	}
		k=j-1;
		while(k>=0){
			printf("%ld\n",c[k]);
			k--;
		}
	// printf("%d",i);
}
