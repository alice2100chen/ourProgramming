#include <stdio.h>

int recursive_add(int n){
	if(n <= 2){
		return 5;}
	return n + recursive_add(n-3);
}

int main(){
	printf("%d\n", recursive_add(15));	
}
