#include<stdio.h>
int main(){
	int a,b;
	int sum1=0,sum2=0 ; 
	printf("Enter Number : ");
	scanf("%d",&a);
	int num1=a;
	printf("Enter Number : ");
	scanf("%d",&b);
	int num2=b;
	for(int i = 0 ; a!=0 ; i++){
		int x=a%10;
		sum1=sum1+x;
		a=a/10;
	}
	for(int i = 0 ; b!=0 ; i++){
		int y=b%10;
		sum2=sum2+y;
		b=b/10;
	}

	if (sum1>=sum2){

		printf("%d>%d",num1,num2);
	}
	else{
		printf("%d>%d",num2,num1);
	}
	
}