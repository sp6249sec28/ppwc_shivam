#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int maxSize;

//function declaration
void push(int data);
int pop();
void display();
void stackResize(int ns);  //ns -> new size

int main(){
	int choice, data;
	printf("Enter size of stack: ");
	scanf("%d", &maxSize);
	
	stack= (int*)malloc(maxSize * sizeof(int));
	
	if (stack == NULL){
		printf("Memory alocation failed");
		return -1;
	}
	
	while(1){
		printf("\nChoose your preferred task to perform :\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. display\n");
		printf("4. exit\n");
		printf("Enter your choice:\n ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Enter the element to push into stack: ");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				if (data != -1){
					printf("Popped out data %d.\n", data);
				}
				break;
			case 3:
				display();
				break;
			case 4:
				free(stack);
				exit(0);
				break;
			default:
				printf("Enter valid input !!!");
		}
	}
	return 0;
}

// push function
void push (int data){
	if(top == maxSize-1){
		printf("Stack Overflow..\n");
		stackResize(maxSize*2);
	}
	top = top + 1;
	stack[top] = data;
}

// pop operation
int pop(){
	if (top == -1){
		printf("Stack underflow..\n");
		return -1;
	}
	int val = stack[top];
	top = top - 1;
	return val;
}

//stack resize
void stackResize(int ns){
	int* temp = (int*)realloc(stack, ns*sizeof(int));
	if (temp == NULL){
		printf("Memory Allocation Failure !!\n");
		//exit(1);
		return;
	}
	stack = temp;
	maxSize = ns;
}


//display operation
void display(){
	if(top == -1){
		printf("Stack is empty !!\n");
		return;
	}
	printf("Stack Elements:\n");
	for(int i=top; i>=0; i--){
		printf("%d\n", stack[i]);
	}
}
