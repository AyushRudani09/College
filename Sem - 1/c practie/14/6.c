#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter Number : \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=1;
		for(int j=1;j<=10;j++){
			sum=i*j;
			printf("%d\t",sum);
		}
			printf("\n");
	}
}