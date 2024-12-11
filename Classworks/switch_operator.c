#include <stdio.h>
int main(){
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Shivam Patnaik");
			break;
		case 2:
			printf("Somnath Roul");
			break;
		case 3:
			printf("Pranab Rout");
			break;
		default:
			break;
	}
}
