#include<stdio.h>
int main(){
	int n,i,a,j=0,c=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		a=n%i;
		b[j]=a;
		j++;
	}
	n=n-2;
	for(j=0;j<n;j++){
		c=c+b[j];
	}
	if(c==0){
		printf("")
	}
}