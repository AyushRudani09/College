#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	printf("enter num1 : ");
	scanf("%d",&num1);
	printf("enter num2 : ");
	scanf("%d",&num2);
	printf("enter num3 : ");
	scanf("%d",&num3);
	printf("enter num4 : ");
	scanf("%d",&num4);
	printf("enter num5 : ");
	scanf("%d",&num5);
	printf("enter num6 : ");
	scanf("%d",&num6);
	printf("enter num7 : ");
	scanf("%d",&num7);
	printf("enter num8 : ");
	scanf("%d",&num8);
	printf("enter num9 : ");
	scanf("%d",&num9);
	printf("enter num10 : ");
	scanf("%d",&num10);
	if((num1>num2)&&(num1>num3)&&(num1>num4)&&(num1>num5)&&(num1>num6)&&(num1>num7)&&(num1>num8)&&(num1>num9)&&(num1>num10)){
		printf("%d is largest\n",num1);
	}
	else if((num2>num3)&&(num2>num4)&&(num2>num5)&&(num2>num6)&&(num2>num7)&&(num2>num8)&&(num2>num9)&&(num2>num10)){
		printf("%d is largest\n",num2);
	}
	else if((num3>num4)&&(num3>num5)&&(num3>num6)&&(num3>num7)&&(num3>num8)&&(num3>num9)&&(num3>num10)){
		printf("%d is largest\n",num3);
	}
	else if((num4>num5)&&(num4>num6)&&(num4>num7)&&(num4>num8)&&(num4>num9)&&(num4>num10)){
		printf("%d is largest\n",num4);
	}
	else if((num5>num6)&&(num5>num7)&&(num5>num8)&&(num5>num9)&&(num5>num10)){
		printf("%d is largest\n",num5);
	}
	else if((num6>num7)&&(num6>num8)&&(num6>num9)&&(num6>num10)){
		printf("%d is largest\n",num6);
	}
	else if((num7>num8)&&(num7>num9)&&(num7>num10)){
		printf("%d is largest\n",num7);
	}
	else if((num8>num9)&&(num8>num10)){
		printf("%d is largest\n",num8);
	}
	else if((num9>num10)){
		printf("%d is largest\n",num9);
	}
	else{
		printf("%d is largest\n",num10);
	}
}