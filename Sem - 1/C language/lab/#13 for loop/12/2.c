#include<stdio.h>
int main(){
	int n,a,i,b=0,r,j;
	printf("Enter Number : ");
	scanf("%d",&a);
	for(i=0;a>0;i++){
		r=a%10;
		b=b+r;
		a=a/10;
	}
	printf("%d",b);
}