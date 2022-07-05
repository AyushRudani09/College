#include<stdio.h>
int main(){
	int a;
	printf("Enter Number : \n");
	scanf("%d",&a);
	int ld,fd;
	ld=a%10;
	fd=a;
	for(int i=0;fd/10!=0;i++){
		fd=fd/10;		
	}
	printf("%d+%d=%d",ld,fd,ld+fd);
}