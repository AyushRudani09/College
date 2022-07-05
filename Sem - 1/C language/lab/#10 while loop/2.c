#include<stdio.h>
int main(){
	int a,b,i,j;
	printf("Enter A :");
	scanf("%d",&a);
	i=j=0;
	while(j<=a){
		i=(i)+(j*j);
		j++;
	}
	printf("%d",i);
}