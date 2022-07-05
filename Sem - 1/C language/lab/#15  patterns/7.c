#include<stdio.h>
int main(){
int n,j,i=1,r,c,num;
char ch;
ch='A';
printf("Enter no. of rows : ");
 scanf("%d", &num);
 for(r=1; r<=num; r++)
 {
  for(c=1; c<=r; c++)
  {
    if(r%2==0)
      
       printf(" %c",ch++);
    else
       printf(" %d",i++);
  }
  printf("\n");
 }
}
