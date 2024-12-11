//Arrays and Pointers
#include <stdio.h>
int main(){
	int *p = NULL;
	int (*ptr)[5];
	int arr[] = {11,12,13,14,15};
	int i;
	p = arr;
	ptr = arr;
	
	//printing the address and values of the array
	for(i=0; i<5; i++){
		printf("Value of arr[%d] = %d\n",i,arr[i]);
		printf("Address of arr[%d] = %u\n",i,&arr[i]);
	}
	/*printf("arr: %p\n", arr);
	printf("p: %p", arr);
	printf("&arr[0]: %p\n", &arr[0]);
	printf("*arr: %d \n", *arr);
	printf("*p: %d\n", *p);
	printf("*ptr: %d\n", *ptr);
	printf("p: %p\n", p);
	printf("ptr: %p\n", ptr);
	*/
	//printf("p++: %p\n", p++);
	//printf("ptr++: %p\n", ptr++);
	printf("p: %p\n", p);
	printf("ptr: %p\n", ptr);
	/*
	for(i=0;i<5;i++){
		printf("ptr[%d]:%u\n",i,ptr[i]);
	}*/
	printf("*(*ptr):%d\n",**ptr);
	printf("*ptr+1):%u\n",*(*ptr)+1);
	
} 
