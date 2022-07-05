#include<stdio.h>
int main(){
	int n,positive=0,nagative=0;
	printf("Enter Size Of Array : \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(i>0){
			positive++;
		}
		else{
			nagative++;
		}
	}
	printf("Number Of positive Number : %d\n",positive);
	printf("Number Of nagative Number : %d\n",nagative);

}