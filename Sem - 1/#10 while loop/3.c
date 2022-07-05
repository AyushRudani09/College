#include<stdio.h>
int main(){
	int a,b,i,j;
	printf("Enter A :");
	scanf("%d",&a);
	i=j=0;
	while(j<=a){
		if(j%2==0){
			i=(i)-(j);
		}
		else{
			i=(i)+(j);
		}
		j++;
	}
	printf("%d",i);
}