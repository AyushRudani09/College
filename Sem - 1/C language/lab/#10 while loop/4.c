#include<stdio.h>
int main(){
	float a,b,i,j;
	printf("Enter A :");
	scanf("%f",&a);
	i=0;
	j=1;
	while(j<=a){
		i=i+(1/j++);
		// j++;
	}
	printf("%f",i);
}	
