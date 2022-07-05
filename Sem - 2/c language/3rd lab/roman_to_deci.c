#include<stdio.h>
int main(){
	int n;
	int arr[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	char *str[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	scanf("%d",&n);
	int i=12;
	while(n>0){
		int d=n/arr[i];
		if(d>0){
			printf("%s",str[i]);
			n=n-arr[i];
			i++;
		}
		i--;
	}
}
