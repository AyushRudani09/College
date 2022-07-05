#include<stdio.h>
int main(){

	int n,a,c=0,b,j[1000],i,k=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=n%i;
		if(a==0){
			j[k]=i;
			k++;
		}
	}
	int x=k;
	for(k=0;k<x;k++){
		c=c+j[k];
	}
	n=2*n;
	if(c==n){
	printf("perfect");		
	}
	else{
		printf("not per");
	}
}