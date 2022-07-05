#include<stdio.h>
int main(){
	int a=4,i,j,num=1;
	for(i=1;i<=a;i++){

		for(j=1;j<=i;j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}