#include<stdio.h>
int main(){
	int a,b;
	printf("Entre Number : ");
	scanf("%d",&a);
	printf("Entre Number : ");
	scanf("%d",&b);
	if(max(a,b)){
		printf("%d > %d",a,b);
	}
	else{
		printf("%d < %d",a,b);

	}
}
int max(int a, int b){
	if(a<b){
		return 0;
	}
	else{
		return 1;
	}
}