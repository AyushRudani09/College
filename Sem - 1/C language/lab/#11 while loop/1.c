#include<stdio.h>
int main(){
	int x,y,i,power;
	printf("Enter X :\n");
	scanf("%d",&x);
	printf("Enter y :\n");
	scanf("%d",&y);
	i=1;
	power=1;
	while(i<=y){
		power=power*x;
		i++;
	}

printf("%d",power);
}