#include<stdio.h>
int main(){
	float a,b=0;
	float i;
	printf("Enter Number : ");
	scanf("%f",&a);
	for(i=1;i<=a;i++){
		b=b+(1/i);
	}
	printf("%f",b);
}