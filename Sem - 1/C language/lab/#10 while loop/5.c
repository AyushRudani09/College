#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter b number");
	scanf("%d",&b);
	printf("enter c number");
	scanf("%d",&c);
	d=(a>b) ? (a>c?printf("%d large",a):printf("%d large",c)): (b>c?printf("%d large",b):printf("%d large",c));

	return 0;
}