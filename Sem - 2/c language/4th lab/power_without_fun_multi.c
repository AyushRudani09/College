#include<stdio.h>

int power(int a,int b){
	if(b==0)
		return 1;
	
	
		int x = a;
		int y = a;
		int i,j;
		for( i=1;i<b;i++){
			for(j=1;j<a;j++){
				x += y;
			}
			y=x;
		}
		return x;
	}
    int main(){
	int a,b;
	printf("Enter base : ");
	scanf("%d",&a);
	printf("Enter power : ");
	scanf("%d",&b);
	printf("%d",power(a,b));

}