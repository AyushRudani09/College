#include<stdio.h>
int s[100], top=-1;
void push(char a){
	top++;
	s[top] = a;
}
void pop(){
	top--;
}
void main(){
	int b = 0;
	char str[100];
	gets(str);

	for(int i=0; str[i]!='\0'; i++){
		if(str[i] == 'a'){
			push('a');
		}
		else if(str[i] == 'b'){
			b++;
		}
		else{
			printf("Invalid input!!\n");
			exit(0);
		}
	}

	while(top>=0){
		pop();
		b--;
	}

	if(b==0){
		printf("String is valid!!\n");
	}
	else{
		printf("String is invalid!!\n");
	}
}