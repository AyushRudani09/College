#include<stdio.h>
int main(){
	char a[1000];
	printf("Eneter String : ");
	scanf("%s",a);
	for(int i = 0  ;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='z'){
			printf("%c",a[i]);
		}
		else {

			for(int j=0;j<(a[i]-48)-1;j++){
				printf("%c",a[i-1]);	
			}
		}
		
		
		
	}
}