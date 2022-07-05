#include<stdio.h>
int main(){
	int a;
	printf("Enter Number : \n");
	scanf("%d",&a);
	printf("%d\n",a%10);
	for(int i=0;a/10!=0;i++){
		a=a/10;
		printf("%d\n",a%10);
	}
}