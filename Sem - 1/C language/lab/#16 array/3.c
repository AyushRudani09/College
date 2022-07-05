#include<stdio.h>
int main(){
	int n,j=0,i;
	printf("Enter Size Of Array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>=0;j--){
		printf("%d\n",a[j]);
	}
}