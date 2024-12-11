#include <stdio.h>
int main(){
	int m,n,p,q; 
	
	printf("Enter the rows of arr1:😀️");
	scanf("%d",&m);	
	printf("Enter the columns of arr1:😆️");
	scanf("%d",&n);
	printf("Enter the rows of arr2:😂️");
	scanf("%d",&p);	
	printf("Enter the columns of arr2:🤣️");
	scanf("%d",&q);
	
	if(m==p && n==q){
		int arr1[m][n];
		int arr2[p][q];
		int arr3[m][n];
		int i,j;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("Enter arr1[%d][%d] : ",i,j);
				scanf("%d", &arr1[i][j]);
			}
		}
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				printf("Enter arr2[%d][%d] : ",i,j);
				scanf("%d", &arr2[i][j]);
			}
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				arr3[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("arr3[%d][%d]: %d\n",i,j,arr3[i][j]);
			}
		}
	}
	else{
		printf("Sum cannot be calculated");
	}
}
