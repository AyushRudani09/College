#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter side A : ");
	scanf("%d",&a);
	printf("Enter side B : ");
	scanf("%d",&b);
	printf("Enter side C : ");
	scanf("%d",&c);	
	if((a*a) == (b*b + c*c) || (b*b) == (a*a + c*c) || (c*c) == (b*b + a*a)){
		printf("right tringle");
	}
	else{
		if((a==b)&&(a==c)){
			printf("equilateral tringle");
		}
		else{
			if(a==b || b==c || a==c){
				printf("isosceles tringle");
			}
			else{
				printf("scalene tringle");
			}
		}
	}
}




#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,root1,root2,root11,root12,root21,root22,D;
	printf("find root of the equation ax^2+bx+c=0 \n");
	printf("Enter a : ");
	scanf("%f",&a);
	printf("\nEnter b : ");
	scanf("%f",&b);
	printf("\nEnter c : ");
	scanf("%f",&c);
	D=(b*b)-(4*a*c);
	if(D>0){
		root1=((-b)+(sqrt(D)))/(2*a);
		root2=((-b)-(sqrt(D)))/(2*a); 
		printf("root 1 =%f  ",root1);
		printf("root 2 =%f  ",root2);
	}
	else{
		if(D<0){
			root11=(-b)/(2*a);
			root12=sqrt(-D)/(2*a);
			root21=(-b)/(2*a);
			root22=sqrt(-D)/(2*a);
			printf("root 1 = %f + i%f",root11,root12);
			printf("root 2 = %f - i%f",root21,root22);
		}
		else{
			if(D==0){
				root1=(-b)/(2*a);
				printf("root 1 = root 2 = %f",root1);
			}
		}
	}

}







	// if(D>0){
	// 	root1=((-b)+(sqrt(D)))/(2*a);
	// 	root2=((-b)-(sqrt(D)))/(2*a); 
	// 	printf("root 1 =%f  ",root1);
	// 	printf("root 2 =%f  ",root2);
	// }
	// if(D<0){
	// 	root11=(-b)/(2*a);
	// 	root12=sqrt(-D)/(2*a);
	// 	root21=(-b)/(2*a);
	// 	root22=sqrt(-D)/(2*a);
	// 	printf("root 1 = %f + i%f",root11,root12);
	// 	printf("root 2 = %f - i%f",root21,root22);
	// }
	// if(D==0){
	// 	root1=(-b)/(2*a);
	// 	printf("root 1 = root 2 = %f",root1);
	// }
// }