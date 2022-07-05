#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	d=(a>b)&&(a>c)? printf("%d large",a):(b>c)&&(b>a)? printf("%d large",b):printf("%d large",c);
}