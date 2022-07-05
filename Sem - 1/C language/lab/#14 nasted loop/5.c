#include<stdio.h>
int main(){
	int a,b,i,j,flage=0,x;
	printf("Enter Starting Point : \n");
	scanf("%d",&a);
	printf("Enter Ending Point : \n");
	scanf("%d",&b);
	for(i=a;i<=b;i++){
		flage=0;
		for(j=2;j<i;j++){
			x=i%j;
			if(x==0){
				flage=1;
			}
		}
		if(flage==0){
			printf("%d\t",i);
		}
	}
}