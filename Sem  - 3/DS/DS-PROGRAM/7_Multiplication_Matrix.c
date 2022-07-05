#include<stdio.h>
void main(){
	int a[3][2], b[2][3], c[3][3];

	printf("Enter first array: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second array: \n");
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &b[i][j]);
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int f = 0;
			for(int k=0; k<2; k++){
				f += a[i][k] * b[k][j];
			}
			c[i][j] = f;
		}
	}

	printf("Multiplication: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}