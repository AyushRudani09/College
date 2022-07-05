#include<stdio.h>
int main(){
	int i,j,x,y;
	printf("Size Of Squre Matrix : ");
	scanf("%d",&x);
	printf("Matrix 1 : \n");
	int a[x][x],c[x][x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("Enter %d %d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix 2 : \n");
	int b[x][x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("Enter %d %d : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
}