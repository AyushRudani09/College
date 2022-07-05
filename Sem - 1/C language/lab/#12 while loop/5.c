#include<stdio.h>
int main(){

    unsigned long long int a,b,c[50],i=0,j,n=1;
    printf("Eneter Number : ");
    scanf("%llu",&a);
    while(a>0){
        b=a%10;
        // printf("%llu\n",b);
        c[i]=b;
        a=a/10;
        i++;
    }
    j=i;
    i=0;
    int v=0;
    int h=0;

    while(n<j){
        c[n]=c[i]*c[i];
        printf("%d\n",c[n]);
        // break;
        i++;
        c[h]=c[n]+c[h];
        printf("%d",c[h]-i);
        // break;
        n++;
    }
}