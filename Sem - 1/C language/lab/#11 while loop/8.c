#include <stdio.h>
int main() {
  int n, i,num,f=0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  i=2;
  // num=n/2;
  while (i<n){
    if (n % i == 0) {
      printf("not prime");
      f=1;
      break;
    }
    i++;
  }
  if(f==0){
  printf("it's prime");

}
  
  return 0;
}