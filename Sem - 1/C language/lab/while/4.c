#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	while(a<=b){
		a++;
		if((a%2==0)&&(a%3!=0)){
		printf("%d\n",a );
		}
	}
}