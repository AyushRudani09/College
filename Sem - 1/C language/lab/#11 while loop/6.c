#include<stdio.h>
int main(){
	int num,i,f,n;
	printf("Enter numbber : ");
	scanf("%d",&num);
	i=1;
	n=0;
	while(i<num){
		if(num%i==0){
			printf("%d\n",i);	
		n=i+n;
		
		}
		
		

		i++;
	}
	if(n==num){
			printf("perfect");
				
		}
		else{
			printf("not perfect");
		}
}