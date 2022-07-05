#include<stdio.h>
int main(){
	int n,x,b;
	float fact,sqr,sum1=0;
	printf("Enter N : \n");
	scanf("%d",&n);
	printf("Enter X : ");
	scanf("%d",&x);
	for(int i=1;i<n;i++){
		fact=1;
		sqr=1;
		for(int j=1;j<=i;j++){
			fact=fact*j;
			sqr=sqr*x;
		}
		sum1=sum1+sqr/fact;
	}
		printf("%f",sum1+1);

}
