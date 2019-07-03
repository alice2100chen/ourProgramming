#include <stdio.h>

int main(){
	int x=10, y=20;

	int temp = x;
	x = y;
	y = temp;

	printf("%d %d\n", x, y);
}
