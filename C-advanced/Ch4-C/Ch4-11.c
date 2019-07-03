#include <stdio.h>

double factorial(double n){
	if(n <= 1){
		return 1;}
	else{
		return n * factorial(n-1);}
}

int main(){
	printf("%.0f\n", factorial(3));
	printf("%.0f\n", factorial(10));
	printf("%.0f\n", factorial(40));			//not precise enough for double from 23!
}
