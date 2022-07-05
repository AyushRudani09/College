#include<stdio.h>
int main(){
  int num,i,a;
  printf("Enter Number : ");
  scanf("%d",&num);
  i=2;
  while(i<num){
    if(num%i!=0){
      printf(" prime");
      break;
    }
    else{
      printf("not prime");
      break;
    }
    i++;
  }
}