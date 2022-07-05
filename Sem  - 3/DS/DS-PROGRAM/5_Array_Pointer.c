#include<stdio.h>
void main(){
	int a[100], *ptr, n;

	printf("Enter size of array: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	// ptr = &a[0];
	printf("You entered: \n");
	for(int i=0; i<n; i++){
		ptr=&a[i];
		printf("%d\n", *ptr);
		// ptr++;
	}
}