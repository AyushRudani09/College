#include<stdio.h>
int main(){
	int a,i,j,k;
	printf("Enter A : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		k=1;
		for(j=1;j<=a-i;j++){
			printf(" ");
		}
		while(k<2*i){
			if(k%2==0){
				printf(" ");
			}
			else{
				printf("%d",i);
			}
			k++;
		}
		printf("\n");
	}
}