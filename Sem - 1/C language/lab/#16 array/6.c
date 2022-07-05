#include<stdio.h>
int main(){
	int i,j;
	int h[5],w[5];
	for(i=0;i<5;i++){
		printf("Persone %d\n",i+1);
		for(j=0;j<1;j++){
			printf("\nEnter Height : \a");
			scanf("%d",&h[i]);
			printf("\nEnter Weight : \a");
			scanf("%d",&w[i]);
		}
	}
	for(i=0;i<5;i++){
		if((h[i]>170)&&(w[i]<50)){
			printf("Persone : %d\n",i+1);
			printf("Height : %d\n",h[i]);
			printf("Weight : %d\n",w[i]);
		}	
	}
}