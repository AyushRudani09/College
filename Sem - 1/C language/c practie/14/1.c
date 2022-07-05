#include<stdio.h>
int main(){
	int n,sum=0,sum1=0;
	printf("Enter Number : \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<=i;j++){
			sum=sum+j;
		}
		sum1=sum1+sum;
	}
	printf("%d",sum1);
}