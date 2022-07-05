#include<stdio.h>

struct student
{
	char c[20];
	int a;

};
void main(){
	struct student a[2];
	printf("%d\n",sizeof(a) );
}