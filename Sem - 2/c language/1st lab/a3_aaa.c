#include<stdio.h>
int main(){
	char a[100];
	printf("Eneter String : ");
	scanf("%s",a);
	for(int i = 1  ;a[i]!='\0';i=i+2){
		for(int j=0;j<a[i]-48;j++){
			printf("%c",a[i-1]);
		}
	}
}