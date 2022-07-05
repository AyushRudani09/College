#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter size of aary : \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter number : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Your Sum is %d And Avrage Is %d",sum,sum/n);
}