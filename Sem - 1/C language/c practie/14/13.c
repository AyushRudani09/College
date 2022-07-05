#include<stdio.h>
int main(){

int total=0;
int a[10][20];
for(int i=1;i<=5;i++){
	printf("Student %d\n",i );
	for(int j=1;j<=4;j++){
		printf("Enter Mark Of Subject %d : ",j);
		scanf("%d",&a[i][j]);
	}
}
for(int i=1;i<=5;i++){
	total=0;
	for(int j=1;j<=4;j++){
		
		total=total+a[i][j];
	}
	printf("Student %d\n",i );

	printf("Total Mark : %d \n",total);
printf("Per : %d%%\n",total/5);

}

}
