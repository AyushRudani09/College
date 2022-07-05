#include <stdio.h>
int main(){
	int pin,i;
	i=1;
	pin=7777;
	while(i<=3){
		printf("entre pin : ");
		scanf("%d",&pin);
		if(pin==7777){
			printf("balance is 1000$");
			break;
		}
		else{
			printf("try again\n");
		}
		i++;
	}

}