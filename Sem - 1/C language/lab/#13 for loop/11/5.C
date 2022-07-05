#include<stdio.h>
int main(){
	int n;
	printf("Enter Number Of array : \n");
	scanf("%d",&n);
	int a[n],i,b=0;
	for(i=0;i<n;i++){
		printf("Enter Number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b=b+a[i];
	}
	printf("sum : %d\n",b);
	printf("avg : %d",b/n);
}