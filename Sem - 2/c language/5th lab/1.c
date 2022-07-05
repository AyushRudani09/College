#include<stdio.h>
int main(){
	int num1;
	printf("Enter Number : ");
	scanf("%d",&num1);
	int flage=0;
	int a[100];
	int i;
	for(i = 0 ; num1 > 0 ; i++){
		a[i] = num1%10;
		num1 = num1/10;
	}
	int k=0;
	for(int j = i-1 ; j >0 ;j--){
		if(a[0]<a[j]){
			a[0] = a[j];
			flage = k;
		}
		k++;
	}
	for(int v = 0 ; v  < i-1 ; v++){
		if(v==flage){
			a[v]=a[0];
			printf("%d\n",a[v]);
			printf("%d",v);
		}
	}
	for(int m = 0 ;m < i-1 ;m++){
		printf("*%d",a[m]);
	}
}