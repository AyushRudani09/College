#include<stdio.h>
int main(){

	int a,b,i,n;
	printf("Enter Number : ");
	scanf("%d %d",&a,&b);
	    i=1;
	    n=a;
	while(i<n){
		a=a-b;
		// printf("%d\n",a);
		// break;
		i++;
		if(a==0){
			printf("%d",i-1);
			break;
		}
	}
}