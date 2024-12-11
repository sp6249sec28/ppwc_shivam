#include <stdio.h>
int main(){
	int m,n,i,j;
	printf("No of Rows and Columns of the Array: ");
	scanf("%d %d",&m,&n);
	
	int arr[m][n], tr[n][m];
	
	printf("Enter the elements \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Element at [%d][%d] : ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	//Transpose the Array
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			tr[j][i] = arr[i][j];
		}
	}
	//Print the Array
	printf("Original Array : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	//Print the transpose Array
	printf("Transpose Array : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",tr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
