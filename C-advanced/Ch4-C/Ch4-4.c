#include <stdio.h>
#include <string.h>		// for memcpy

int main(){
	int num_array[][3] =  {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int x[3];
	memcpy(x, num_array[0], 3*sizeof(int));		// x[] = num_array[0]
	int y = num_array[0][2];
	num_array[2][1] = -8;
	
	printf("[");
	for(int i=0; i<3; ++i){
		printf("%d%s", x[i], i==2? "":", ");}
	printf("]\n");
	printf("%d\n", y);
	printf("%d\n", num_array[2][1]) ;
}
