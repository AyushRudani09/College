#include<stdio.h>
int main(){
	int n;
	float sum=1,sum1=0;
	printf("Enter Number : \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=1;
		for(int j=1;j<=i;j++){
			sum=sum*j;
		}
		sum1=sum1+1/sum;
	}
	printf("%f",sum1);
}