#include <stdio.h>

int main(){
	int x=10, y=20;

	x = y;
	y = x;

	printf("%d %d\n", x, y);
}
