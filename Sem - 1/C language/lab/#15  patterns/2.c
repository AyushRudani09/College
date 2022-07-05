#include<stdio.h>
int main(){
	int a=4,i,j,num;
	for(i=1;i<=a;i++){
		num=i;
		for(j=1;j<=i;j++){
			printf("%d",num);
			num++;
		}
	printf("\n");
	}
}