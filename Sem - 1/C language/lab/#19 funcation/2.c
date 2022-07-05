#include<stdio.h>
int main(){
	int n;
	printf("Entre Value of N : ");
	scanf("%d",&n);
	printf("%d",fun(n));
}
int fun(int n){
	int sum=0;
	for (int i = 0; i <= n; ++i)
	{
		sum+=i;
	}
	return sum;
}