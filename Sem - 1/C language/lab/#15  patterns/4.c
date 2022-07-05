#include<stdio.h>
int main(){

int n=4,i,j;
printf("\n Enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=1;j<i;j++)
  {
   if((i+j)%2==0)
   {
  printf("0\t");
   }
 else
 {
  printf("1\t");
 }
  }
 printf("\n");
 }
}