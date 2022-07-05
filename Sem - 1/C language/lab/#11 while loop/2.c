#include<stdio.h>
int main(){
	int x,i,f;
	printf("Enter X :\n");
	scanf("%d",&x);
	i=1;
	f=1;
	while(i<=x){
		f=f*i;
		i++;
	}

printf("%d",f);
}