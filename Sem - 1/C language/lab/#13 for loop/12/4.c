#include<stdio.h>
int main(){
	int a,b[100],c[100],i,j,k;
	printf("Enter Number : ");
	scanf("%d",&a);
	for(i=0;a>0;i++){
		k=a%10;
		b[i]=k;
		a=a/10;
	}
	for(j=i-1;j>=0;j--){
		i=0;
		c[k]=b[j];
		if(c[k]==b[i]){
		printf("pelidrom");
		break;
	}
	else{
		printf("not pelidrom");
		break;
	}
		k++;
		i++;
	
	}
}