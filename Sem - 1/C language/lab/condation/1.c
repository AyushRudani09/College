#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	c=a>b? printf("%d large",a):printf("largest no %d",b);
}