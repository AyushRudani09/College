#include<stdio.h>
int main(){
	float a,b;
	float sum1=0,sum2=0 ; 
	printf("Enter Number : ");
	scanf("%f",&a);
	float num1=a;
	printf("Enter Number : ");
	scanf("%f",&b);
	float num2=b;
	int  num3=a*100;
	int  num4=b*100;

	for(int i = 0 ; num3!=0 ; i++){
		int x=num3%10;
		sum1=sum1+x;
		num3=num3/10;
	}
	for(int i = 0 ; num4!=0 ; i++){
		int y=num4%10;
		sum2=sum2+y;
		num4=num4/10;
	}

	if (sum1>=sum2){

		printf("%.2f>%.2f",num1,num2);
	}
	else{
		printf("%.2f>%.2f",num2,num1);
	}
	
}