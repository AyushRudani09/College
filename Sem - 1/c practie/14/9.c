#include<stdio.h>
void fun();
int main(){

	static int b = 50;
	fun();
}
void fun(){
	static int b;
	printf("%d\n",b );
}