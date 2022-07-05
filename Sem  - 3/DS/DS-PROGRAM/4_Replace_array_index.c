#include<stdio.h>
void main(){
	int a[100], n, val1, val2, upt_index=0;
	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("Enter array: \n");
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);

	printf("Enter no. to replace: ");
	scanf("%d", &val1);

	printf("Enter no. to replace with: ");
	scanf("%d", &val2);

	
	for(int i=0; i<n; i++){
		if(a[i] == val1){
			a[i] = val2;
			upt_index=i;
		}
	}

	if(upt_index==0)
		printf("number not found!\n");
	else{
		printf("New array: \n");
		for(int i=0; i<n; i++)
			printf("%d\n", a[i]);

		printf("Index of updated value iS: %d\n",upt_index);
	}	
}