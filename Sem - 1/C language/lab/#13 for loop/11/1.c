#include<stdio.h>
int main(){
	int x,y,a=1,i;
	printf("Enter X : ");
	scanf("%d",&x);
	printf("Enter Y : ");
	scanf("%d",&y);
	for(i=0;i<y;i++){
		a=a*x;
	}	
	printf("%d^%d=%d",x,y,a);
}