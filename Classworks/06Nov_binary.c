#include <stdio.h>

int binarySearch(int arr[], int size, int target){
	int left=0; 
	int right = size - 1;
	while (left<=right){
		int mid = left + (right-left) / 2;
		
		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else 
			right = mid - 1;
	}
	return -1;
}

int main(){
	int n, target;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter sorted array : \n");
	for (int i=0; i<n; i++){
		printf("Element %d  : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the target element : ");
	scanf ("%d", &target);
	
	int result = binarySearch(arr, n, target);
	if(result != -1){
		printf("Element found at index %d\n", result);
	}
	else{
		printf("Element not found in the array\n");
	}
}
