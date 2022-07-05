#include<stdio.h>
int main(){
    int i,j,sum;
    int a[3];
    for(i=0;i<5;i++){
        printf("Enter Marks For Student %d\n",i+1);
        for(j=0;j<3;j++){
            printf("\nEnter Marks %d : \a",j+1);
            scanf("%d",&a[j]);
            
        }
        sum=0;
        for(j=0;j<3;j++){
            sum=sum+a[j];
        }
        printf("Student - %d\n",i+1);
        printf("total : %d\n",sum);
        printf("Avrage : %d\n",sum/3);
    }
}