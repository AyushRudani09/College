#include<stdio.h>
int main(){
	int n,max,min,sum=0;
	printf("Enter Number : \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]){
			max=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("max : %d\n",max);
	printf("min : %d\n",min);
	printf("sum : %d\n",sum);
}