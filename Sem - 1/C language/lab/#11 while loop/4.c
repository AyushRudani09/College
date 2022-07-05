#include<stdio.h>
int main(){
	int num,fd,ld,sum;
	printf("Enter numbber : ");
	scanf("%d",&num);
	ld=num%10;
	while((num/10)!=0){
		num=num/10;
	}
	fd=num;
	sum=fd+ld;
	printf("%d:%d",fd,ld);
	printf("%ld",sum);
}