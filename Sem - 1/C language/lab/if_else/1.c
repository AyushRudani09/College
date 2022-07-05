#include<stdio.h>
void main(){
	int year;
	printf("enter years : ");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is a leap year",year);
	}
	else{
		if(year%100==0){
			printf("%d is a leap year",year);
		}
		else{
			if(year%4==0){printf("%d is a leap year",year);
			}
			else{			printf("%d is not leap year",year);
	}
		}

	}

}