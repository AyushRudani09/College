#include<stdio.h>
int main(){
	int a,b,flage;
	printf("Enter Number : \n");
	scanf("%d",&a);
	printf("Enter Number : \n");
	scanf("%d",&b);
	if(b>a){
		for(int i=a;i<=b;i++){
		flage=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flage=1;
			}
		}
		if(flage==0){
			printf("%d\n",i);
		}
	}
	}
	else{
		for(int i=b;i<=a;i++){
		flage=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flage=1;
			}
		}
		if(flage==0){
			printf("%d\n",i);
		}
	}
	}
}