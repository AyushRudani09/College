#include<stdio.h>
int main(){
	int a,sum=0;
	printf("Enter Number : \n");
	scanf("%d",&a);
	sum=a%10;
	for(int i=0;a/10!=0;i++){
		a=a/10;
		sum+=a%10;
	}
	printf("sum is %d",sum);
}