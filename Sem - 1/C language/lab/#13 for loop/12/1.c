#include<stdio.h>
int main(){
	int n,i,r;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;n>0;i++){
		r=n%10;
		printf("%d\n",r);
		n=n/10;
	}
}