#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int a,b,c,add,sub,mul,div;
printf("Enter Number A:");
scanf("%d",&a);
printf("Enter Number B:");
scanf("%d",&b);
l:
printf("What Do You Want.....? \n");
printf(" press 1 for addition \n press 2 for substitution \n press 3 for multiplication\n press 4 for division \n 5.exit");
scanf("%d",&c);
if(c==1){
	add=a+b;
	printf("%d+%d=%d",a,b,add);
}
else{
	if(c==2){
		sub=a-b;
		printf("%d-%d=%d",a,b,sub);
	}
	else{
		if(c==3){
			mul=a*b;
			printf("%dx%d=%d",a,b,mul);
		}
		else{
			div=a/b;
			if(c==4){
				printf("%d/%d=%f",a,b,div);
			}
			else{
				// if(c==5){
				// 	exit ();
				// }
				// else{
					if(c>5){
						printf("error!!!");
					}
				}
			}
		}
	}
}