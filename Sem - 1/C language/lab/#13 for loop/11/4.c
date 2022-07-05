#include<stdio.h>
int main(){
	int a,b,i,l,f=0;
	printf("Enter Number : ");
	scanf("%d",&a);
	for(i=0;a!=0;i++){
		a=a/10;
		// f=i;
	}
	l=a%10;
	printf("%d",l+a);

}