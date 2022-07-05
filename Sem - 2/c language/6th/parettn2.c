#include<stdio.h>
int main(){
	int i,j,k,m;
		k=1;
		m='a';

	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i%2!=0){
				if(j<=5-i){
					
				}
				else{
					printf("%d",k++);
				}
			}
			else{
			if(j<=5-i){
				}
				else{
					printf("%c",m++);
				}	
			}
		}
		printf("\n");
	}
}