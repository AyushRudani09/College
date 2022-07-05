#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	if((a>b)&&(a>c)){
		printf("%d is largest number",a);
	}
	else{
		if((b>c)&&(b>a)){
			printf("%d is largest number",b);
		}
		else{
			if((c>a)&&(c>b)){
				printf("%d is largest number",c);
			}
			else{
				if((a==b)&&(a==c)){
					printf("nummber are same");
				}
			}
		}
	}
}