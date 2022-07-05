#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a number of day\n");
	scanf("%d",&a);
	switch (a){
		case 1:
		printf("it's Sunday");
		break ;
		case 2:
		printf("it's Monday");
		break ;
		case 3:
		printf("it's Tuesday");
		break ;
		case 4:
		printf("it's Wednesday");
		break ;
		case 5:
		printf("it's Thursday");
		break ;
		case 6:
		printf("it's Friday");
		break ;
		case 7:
		printf("it's Saturday");
		break ;
		default :
		printf("enter valid");
		break ;
	}
}