#include<stdio.h>
int main(){
	int n,i,k=0,j=0;
	printf("Entre Number Of Array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
		if(a[i]>=0){
			k++;
		}
		else{
			j++;
		}
	}
	printf("Positive : %d\n",k);
	printf("nagetive : %d\n",j);

}
