#include<stdio.h>
#include<math.h>
int main(){
	int power,fact,i,j,sum=0,n,x,div;
	printf("Enter N : \n");
	scanf("%d",&n);
	printf("Enter X : \n");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		sum=sum+((pow(x,i))/(fact));
	}
	printf("%d",sum);
}