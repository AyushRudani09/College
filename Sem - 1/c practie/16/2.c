#include<stdio.h>
int main(){
	int n,even=0,odd=0;
	printf("Enter Size Of Array : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("Number Of even Number : %d\n",even);
	printf("Number Of odd Number : %d\n",odd);

}
