#include <stdio.h>
void f2();
void f1(int n){
	if (n==0){
		return;
	}
	printf("%d ", n);
	f2(n - 2);
	printf("%d ", n);
}
void f2(int n){
	if(n==0){
		return;
	}
	printf("%d ", n);
	f1(++n);
	printf("%d ", n);
}
int main(){
	f1(15);
}
