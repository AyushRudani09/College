#include<stdio.h>
int main(){
	int a,b=0,c,i,n,j;
	printf("Enter N : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(j=1;j<=i;j++){
			a=a*j;
		}
		printf("%d\n",a); 
		b=b+(1/a);
	}
	printf("%d",b);
}