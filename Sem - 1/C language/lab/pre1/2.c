#include<stdio.h>
int main(){
	int mn;
	printf("Enter Month Number : ");
	scanf("%d",&mn);
	if((mn==1)||(mn==3)||(mn==5)||(mn==7)||(mn==8)||(mn==10)||(mn==12)){
		printf ("31 days");
	}
	else if((mn==2)||(mn==4)||(mn==6)||(mn==9)||(mn==11)){
		printf("30 days");
	}
	else{
		printf("Enter Valid Month Number");
	}
}