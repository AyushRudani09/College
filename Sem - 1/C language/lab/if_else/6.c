#include<stdio.h>
int main(){
	int num,n;
	printf("Enter Number : ");
	scanf("%d",&num);
	n=num%2;
	if(n==0){
		printf("last latter is even");
	}
	else{
		printf("last latter is odd");
	}
}