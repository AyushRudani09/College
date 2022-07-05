#include<stdio.h>
int main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		k=1;
		for(j=1;j<=5;j++){
			if(j<=5-i){
				printf(" ");
			}
			else{
			printf("%d",k);
			k++;
			}

		}
		printf("\n");
	}
}