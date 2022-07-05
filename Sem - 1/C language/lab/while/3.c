#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	while((i>=a)&&(i<=b)){
		printf("%d\n",i );
		i=i++;
	}
}