#include<stdio.h>
int main(){
	int a,sum=0;
	printf("Enter Number : \n");
	scanf("%d",&a);
	for(int i=1;i<a;i++){
		if(a%i==0){
			sum=sum+i;
		}
	}
	if(sum==a){
		printf("It's Perfect");
	}
	else{
		printf("It's Not Perfect");
	}
}