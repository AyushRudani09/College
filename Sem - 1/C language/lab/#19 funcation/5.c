#include<stdio.h>
int main(){
	int a;
	printf("Entre Number : ");
	scanf("%d",&a);
	if (prime(a)){
		printf(" not prime");
	}
	else{
		printf("prime");
	}
	
}
int prime(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			return 1;
		}
	}
	return 0;
}