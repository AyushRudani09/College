#include<stdio.h>
int main(){
	int n,j,i;
	printf("\nEnter Number Of Subject : ");
	scanf("%d",&n);
	int a[2][n];
	for(i=0;i<2;i++){
		printf("\nRoll Number %d",i+1);
		for(j=0;j<n;j++){
			printf("\nMark Of Subject %d : ",j+1);		
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		printf("\nRoll Number %d : ",i+1);
		for(j=0;j<n;j++){
			printf("Subject : %d :",j+1);
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
