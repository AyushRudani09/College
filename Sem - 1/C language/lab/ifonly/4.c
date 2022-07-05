#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the number A :");
scanf("%d",&a);
printf("Enter the number B :");
scanf("%d",&b);
printf("Enter the number C :");
scanf("%d",&c);
if((a>=b)&&(a>=c)){
printf("A largest");
}
if((b>=c)&&(b>=a)){
printf("B largest");
}
if((c>=a)&&(c>=b)){
printf("C largest");
}
}