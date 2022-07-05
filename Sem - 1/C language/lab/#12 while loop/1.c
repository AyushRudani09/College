#include<stdio.h>
int  main(){


	long a,b,c[50],d=0,i=0,j;
	printf("Enter Number : ");
	scanf("%ld",&a);
	while(a>0){
		b=a%10;
		// printf("%d\n",b);
		c[i]=b;
		a=a/10;
		i++;
	}
	j=i-1;
	while(j>=0){
		printf("%ld\n",c[j]);
		j--;
	}

}