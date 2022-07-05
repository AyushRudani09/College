#include<stdio.h>
int main(){
	int a,b=0,c=0,i;
	printf("Enter Number : ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		if(i%2==0){
			 b=b+i;
		}
		else{
			c=c+i;
		}
	}
	printf("%d",c-b);

}