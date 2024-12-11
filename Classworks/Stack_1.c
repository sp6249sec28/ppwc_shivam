#include <stdio.h>
#include <stdlib.h>
#define maxsize 5 //pre processor

//function declaration
void push();
void pop();
void display();

int stack[maxsize];
int top = -1;  // initially the stack is empty

void main(){
	int choice;
		
	while(1){
		printf("\nStatic implementation of stack");
		printf("\n--------------------------------");
		printf("\n 1. push");
	    printf("\n 2. pop");
    	printf("\n 3. display");
    	printf("\n 4. exit");
		printf("\n Enter choice : ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: printf("Entered push operation.\n");
					push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Invalid Choice !!!\n");
		}
	}
}

//push operation
void push(){
	int num;
	if(top == maxsize-1){
		printf("Stack is full !!\n");
		return;
	}
	printf("Enter element to be pushed into the stack : ");
	scanf("%d", &num);
	top = top + 1;
	stack[top] = num;
	printf("Element %d pushed to stack.\n", num);
}

//pop operation
void pop(){
	int num;
	if(top == -1){
		printf("Stack is empty !! Nothing to pop...");
		return;
	}
	printf("Popped element : %d\n", stack[top]);
	top = top - 1;
	printf("Stack elements are \n");
	for(int i=top; i>=0; i--){
		printf("stack[%d] : %d\n", i, stack[i]);
	}
}

//display operation
void display(){
	if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
	for(int i=0; i<=top; i++){
		printf("%d\t", stack[i]);
	}
	printf("\n");
}

