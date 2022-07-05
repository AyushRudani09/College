#include<stdio.h>
int main(){
  int num,i,a,temp;
  scanf("%d",&i);
  scanf("%d",&a);
  temp=a<i?a:i;
  while(temp<(a<i?i:a)){
    printf("%d\n",temp);
    temp++;
  }
}