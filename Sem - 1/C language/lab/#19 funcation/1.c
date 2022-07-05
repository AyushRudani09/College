#include<stdio.h>
int main(){
	int p,r,n;
	printf("Enter Value : ");
	scanf("%d",&p);
	printf("Enter Value : ");
	scanf("%d",&r);
	printf("Enter Value : ");
	scanf("%d",&n);
	printf("%d",intrast(p,r,n));
}
int intrast(int p,int r,int n){
		int i;
		i=p*r*n/100;
		return i;
	}