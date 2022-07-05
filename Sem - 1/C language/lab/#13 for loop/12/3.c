#include<stdio.h>
int main(){
	int n,i,j=0;
	printf("Enter Size of arry : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=i-1;j>=0;j--){
		printf("%d\n",a[j]);
	}
}