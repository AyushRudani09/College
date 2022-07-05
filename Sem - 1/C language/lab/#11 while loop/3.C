#include<stdio.h>
int main(){
	int num,i,f;
	printf("Enter numbber : ");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		if(num%i==0){
			printf("%d\n",i);	

		}
		i++;
	}
}