#include<stdio.h>  
  
int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int no,fact;
  printf("Enter a no for factorial: ");  
  scanf("%d", &no);   
   
  fact = factorial(no);  
  printf("Factorial of %d is %d\n", no, fact);  
  return 0;  
}  