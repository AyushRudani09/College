#include<stdio.h>
#include<math.h>
int main(){
  int power,fact,i,j,sum=0,sum1=0,sum2=0,n,x,div;
  printf("Enter N : \n");
  scanf("%d",&n);
  printf("Enter X : \n");
  scanf("%d",&x);
  for(i=0;i<n;i++){
    fact=1;
    for(j=1;j<=i;j++){
      fact=fact*j;
    }
    if(i%2==0){
    sum1=sum1+((pow(x,i))/(fact));
    }
    else{
    sum2=sum2+((pow(x,i))/(fact));

    }
  }
    sum=sum1-sum2;

  printf("%d",sum);
}