#include<stdio.h>
#include<math.h>
int main(){
	int a,b[100],c,i,j,k=0,n,x[100],y=0;
	printf("Entre Number : ");
	scanf("%d",&a);
	int g=a;
	for(i=0;a>0;i++){
		c=a%10;
		b[i]=c;
		a=a/10;
		k=k+1;
	}
	n=k;
	for(i=0;i<n;i++){
		x[i]=pow(b[i],n);
		printf("x[i]:%d\n",x[i]);
		 y=y+x[i];
		 printf("y=%d\n",y);
	}
	// printf("%d",a);
	if(y==g){
		printf("armstronge");

	}
	else{
		printf("not armstronge");
	}
}