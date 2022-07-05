#include<stdio.h>
int number1(int num1){
	int flage;
	int a[100];
	int i;
	for(i = 0 ; num1 > 0 ; i++){
		a[i] = num1%10;
		num1 = num1/10;
	}
	for(int j = i-1 ; j >0 ;j--){
		if(a[0]<a[j]){
			a[0] = a[j];
		}
	}
	return a[0];	
}
int number2(int num2){
	int b[100];
	int i;
	for(i = 0 ; num2 > 0 ; i++){
		b[i] = num2%10;
		num2 = num2/10;
	}
	for(int j = i-1 ; j >0 ;j--){
		if(b[0]<b[j]){
			b[0] = b[j];
		}
	}
	return b[0];	
}
int flage1(int num1){
	int flage1;
	int a[100];
	int i;
	for(i = 0 ; num1 > 0 ; i++){
		a[i] = num1%10;
		num1 = num1/10;
	}
	for(int j = i-1 ; j >0 ;j--){
		if(a[0]<a[j]){
			a[0] = a[j];
			flage1=j;
		}
	}
	return flage1;
}
int flage2(num2){
	int b[100];
	int i;
	int flage2;
	for(i = 0 ; num2 > 0 ; i++){
		b[i] = num2%10;
		num2 = num2/10;
	}
	for(int j = i-1 ; j >0 ;j--){
		if(b[0]<b[j]){
			b[0] = b[j];
			flage2=j;
		}
	}
	return flage2;
}
int main(){
	int num1,num2;
	int m,n;
	int c[100],d[100];
	printf("Enter Number : ");
	scanf("%d",&num1);
	printf("Enter Number : ");
	scanf("%d",&num2);
	int number1_Big = number1(num1);
	int number2_Big = number2(num2);
	int number1_index = flage1(num1);
	int number2_index = flage2(num2);
	printf("*%d",number1_Big);
	printf("#%d",number2_Big);
	printf("**%d",number1_index);
	printf("##%d",number2_index);
	for(m = 0 ; num1 > 0 ; m++){
		c[m] = num1%10;
		num1 = num1/10;
	}
	for(n = 0 ; num2 > 0 ; n++){
		d[n] = num2%10;
		num2 = num2/10;
	}
	for(int l1=0 ; l1<m ; l1++){
		if(c[l1]==number1_Big){

		}
	}
	for(int l2=0 ; l2<n ; l1++){
		
	}
}