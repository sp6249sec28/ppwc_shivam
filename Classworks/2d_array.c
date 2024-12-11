//2D Array

#include <stdio.h>

int main(){
	int i,j;
	//Array Declaration
	int arr[4][3];
	int arr1[4][3] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int arr2[4][3] = {{0,1,2},{3,4,5},{6,7,8},{9,10,11}};	
	int b[2][2];
	
	//Taking user input
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("b[%d][%d]: %d\n",i,j,b[i][j]);
		}
	}
	
}

