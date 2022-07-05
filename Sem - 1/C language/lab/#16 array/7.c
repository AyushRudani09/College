#include<stdio.h>
int main(){
	int i,j,n,sum=0;
	printf("\nEnter Size Of Arrya : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\nEnter Number : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int avg=sum/n;
	int k=0;
	printf("\nAvrage : %d",avg);
	for(i=0;i<n;i++){
		if(a[i]>avg){
			k++;
		}
	}
	printf("\n%d\n",k);
}
