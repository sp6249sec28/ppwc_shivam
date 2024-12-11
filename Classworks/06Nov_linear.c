#include <stdio.h>
int main(){
	int n, target, found=0;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	//element printing
	for (int i=0; i<n; i++){
		printf("Enter element %d  : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the target element : ");
	scanf("%d", &target);
	
	for(int i=0; i<n; i++){
		if(arr[i] == target){
			printf("Element found at index %d\n", i);
			found=1;
			break;
		}
	}
	if (!found){
		printf("Element not found in array...\n");
	}
}
