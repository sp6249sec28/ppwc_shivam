#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define maxsize 100

int stack[maxsize];
int top = -1;

//function declaration
void push(int data);
int pop();
int postfix(char *exp);
void stackResize(int ns);  //ns -> new size

int main(){
	//printf("Enter postfix expression : \n");
	char exp[maxsize] = "234*6*+";
	
	int result = postfix(exp);
	
	printf("Result of postfix evaluation : %d\n", result);
	return 0;
}

// push operation
void push (int data){
	if(top == maxsize-1){
		printf("Stack Overflow..\n");
		stackResize(maxsize*2);
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
	
	return stack[top--];
}

void stackResize(int ns){
	stack = (int*)realloc(stack, ns*sizeof(int));
	if (stack == NULL){
		printf("Memory Allocation Failure !!\n");
		//exit(1);
		return;
	}
	maxsize = ns;
}

//evaluate postfix
int postfix(char *exp){
	int i=0, op1, op2, result;
	char ch;
	
	while((ch = exp[i++]) != '\0'){
		//if digit, push into stack
		if (isdigit(ch)){
			push(ch - '0');
		}
		
		//if operator, pop first 2 operand
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
			op1 = pop();
			op2 = pop();
			
			switch(ch){
				case '+':
					result = op1 + op2;
					break;
				case '-':
					result = op1 - op2;
					break;
				case '*':
					result = op1 * op2;
					break;
				case '/':
					result = op1 / op2;
					break;
				default:
					printf("Invalid Operator\n");
					exit(1);
			}
			
			//push result into stack
			push(result);
		}
		else if(ch == ' '){
			continue;
		}
		else{
			printf("Invalid Character expression : %c\n", ch);
			exit(1);
		}
	}
	
	//final result is left in stack
	return pop();
}
