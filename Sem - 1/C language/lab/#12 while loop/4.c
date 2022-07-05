#include<stdio.h>
int main(){
	unsigned long long int  a,b,c[50],i=0,j,d[50],k=0;
	printf("Enter Number : ");
	scanf("%llu",&a);
	while(a>0){
		b=a%10;
		// printf("%ld\n",b);
		c[i]=b;
		// printf("ci : %ld\n",c[i]);
		a=a/10;
		i++;
	}
	j=i-1;
	i=0;
	k=0;
	while(j>=0){
		d[k]=c[j];
		// printf("dk : %ld\n",d[k]);
		if(d[k]==c[i]){
		printf("palindrome");
		break;
		}
		else{
			printf("not palindrome");
			break;
		}
		k++;
		j--;
		i++;
		}

	
}