#include<stdio.h>
int main(){
	int a,b;
	printf("Entre A : ");
	scanf("%d",&a);
	printf("Entre B : ");
	scanf("%d",&b);
	printf("%d\n",swap(a,b));
	printf("%d\n",a);
}
int swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	return a;
}