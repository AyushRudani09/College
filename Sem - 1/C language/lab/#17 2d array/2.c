#include<stdio.h>
int main(){
	int a[3][3],j,i,zero=0,pos=0,nag=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter %d %d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");

	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==0){
				zero++;
			}
			if(a[i][j]>0){
				pos++;
			}
			if(a[i][j]<0){
				nag++;
			}
		}
	}
	printf("Count of zero : %d\n",zero);
	printf("Count of positive : %d\n",pos);
	printf("Count of nagative : %d\n",nag);

}