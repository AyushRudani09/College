#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter Starting : ");
	scanf("%d",&a);
	printf("Enter Ending : ");
	scanf("%d",&b);
	if(b>a){
		for(i=a;i<b;i++){
			if((i%2==0)&&(i%3==0)){
			printf("%d\n",i);
			}
		}
	}
	else{
		for(i=b;i<a;i++){
			if((i%2==0)&&(i%3==0)){
			printf("%d\n",i);
			}
		}
	}
}