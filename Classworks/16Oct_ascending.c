#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,n,temp;
	int *arr;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	arr = (int*)malloc(n*sizeof(int));
	if (arr==NULL){
		printf("Memory allocation failed.");
	}
	printf("Enter %d integers : \n", n);
	for (i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	//Sort in ascending order
	for(i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	//Print in ascending order
	for(i=0;i<n;i++){
		printf("%d\t", arr[i]);
	}
	free(arr);
	return 0;
}
