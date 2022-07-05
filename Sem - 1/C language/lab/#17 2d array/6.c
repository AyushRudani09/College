#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("\nEnter Size of matrix : ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	printf("\nEnter Value Of first Matrix : ");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){
			printf("\nEnter Value %d %d : ",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	printf("\nEnter Value Of Second Matrix : ");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){
			printf("\nEnter Value %d %d : ",i,j);
			scanf("%d",&b[i][j]);
		}

	}
	for(i=0;i<n;i++){
		int sum=0;
		for(j=0;j<n;j++){
			sum=sum+a[i][j]*b[j][i];
		}
		

	}
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");

	}
}