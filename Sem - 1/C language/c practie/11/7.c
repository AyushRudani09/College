#include<stdio.h>
int main(){
	int a,flage=0;
	printf("Enter Number : \n");
	scanf("%d",&a);
	for(int i=2;i<a;i++){
		if(a%i==0){
			printf("Not prime");
			flage=1;
			break;
		}
	}
	if(flage==0){
		printf("Prime");
	}
}