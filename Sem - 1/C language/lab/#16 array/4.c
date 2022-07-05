#include<stdio.h>
int main(){
	int n,i,j,sum=0,max=0,min;
	printf("Entre Size Of Array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
		else if(a[i]<a[0]){
			min=a[i];
		}
		sum += a[i];
	}
	printf("sum : %d\n",sum);
	printf("Avrage : %d\n",(sum/n));
	printf("max : %d\n",max);
	printf("min : %d\n",min);
}