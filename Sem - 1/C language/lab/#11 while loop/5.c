#include<stdio.h>
int main(){
	int a[1000],i,sum,n,avg;
    printf("Enter size of the array \a : ");
    scanf("%d",&n);
    
    i=1;
    sum=0;
    while(i<=n){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
        sum=a[i]+sum;
        i++;
    }	
    printf("sum is %d \n",sum);
    avg=sum/n;
    printf("Avrage is %d",avg);
    
}