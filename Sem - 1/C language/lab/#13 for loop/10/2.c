#include<stdio.h>
int main(){
	int a,i,b=0;
	printf("Enter Number : ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		b=b+(i*i);
	}
	printf("%d",b);
}