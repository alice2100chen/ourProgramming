#include <stdio.h>

int main(){
	int x = 10+5;
	int y = 20-x;
	int z = x*y;
	double q = (double)x/y;

	printf("%d %d %d %.1f\n", x, y, z, q);
}
