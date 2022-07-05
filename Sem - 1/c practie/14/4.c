#include<stdio.h>
int main(){
	int n,x;
	printf("Enter N : \n");
	scanf("%d",&n);
	printf("Enter X : ");
	scanf("%d",&x);
	float sum1=0,sum2=0,sqr,fact;
	for(int i=1;i<n;i++){
		fact=1;
		sqr=1;
		for(int j=1;j<=i;j++){
			fact=fact*j;
			sqr=sqr*x;
		}
		if(i%2==0){
			sum1=sum1+sqr/fact;
		}
		else{
			sum2=sum2+sqr/fact;
		}
	}
	printf("%f",sum1-sum2+1);
}