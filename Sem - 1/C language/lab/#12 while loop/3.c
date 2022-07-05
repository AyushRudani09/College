#include<stdio.h>
int main(){

	long a[50],b,n,c,i=0,j;
	printf("Enter Loop Number : ");
	scanf("%d",&n);
	while(i<n){
		printf("Enter Number : ");
		scanf("%ld",&a[i]);
		i++;
	}
	j=i-1;
	while(j>=0){
		printf("%d\n",a[j]);
		j--;
	}

}