#include<stdio.h>
int main(){
    int i,j,x,n;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter Number : ");
        scanf("%d",&a[i]);}
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }