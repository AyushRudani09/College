#include<stdio.h>
#include<math.h>
int main()
{
   float sum=0,sum1=0,sum2=1;
   int i,n;
   printf("\n Enter Size Of Array : ");
   scanf("%d",&n);
   float a[n];
   for(i=0;i<n;i++)
   {
      printf("\n Enter Number : ");
      scanf("%f",&a[i]);
      sum=sum+a[i];
      sum1=sum1+(1/a[i]);
      sum2=sum2*a[i];
  }
  printf("\n Average = %f",sum/n);
  printf("\n Geometric = %f",pow(sum2,(1/n)));
  printf("\n Harmonic = %f",n*pow(sum1,(-1)));
}