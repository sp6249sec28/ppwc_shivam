#include <stdio.h>

int jumble(int x, int y){
	x = 2*x + y;
	return x;
}
int main(){
	int x=2, y=5;
	y = jumble(x,y);
	x = jumble(y,x);
}
