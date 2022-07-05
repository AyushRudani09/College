#include<stdio.h>
int main(){
	int i,j,x,y;
	printf("Size Of Squre Matrix : ");
	scanf("%d",&x);
	int a[x][x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("Enter %d %d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Tranpose Matrix : \n");
	for(j=0;j<x;j++){
		for(i=0;i<x;i++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}