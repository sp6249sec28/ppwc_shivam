#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,n,i;
	printf("Enter number of integer to be entered :\n");
	scanf("%d", &n);
	
	//malloc declaration
	p = (int*) malloc(n * sizeof(int));
	if (p == NULL){
		printf("Memory not available\n");
		exit(1);
	}
	//taking user input
	for (i=0; i<n; i++){
		printf("Enter an integer:");
		scanf("%d", p+i);
	}
	for (i=0; i<n; i++){
		printf("%d\t", *(p+i));
	}
	return 0;
}
