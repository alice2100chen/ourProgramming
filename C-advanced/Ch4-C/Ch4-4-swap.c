#include <stdio.h>

int main(){
	int num_visitors[] = {70, 10, 14, 7, 25, 30, 50};
	printf("[");
	for(int i=0, arr_len=sizeof(num_visitors)/sizeof(int); i<arr_len; ++i){
		printf("%d%s", num_visitors[i], i==arr_len-1? "":", ");}
	printf("]\n");

	// use "{}" to make a "block scope" for local variable
	// refer: Ch4-6a.cpp
	// refer: https://en.cppreference.com/w/cpp/language/scope
	{
		int temp = num_visitors[0];		// temp cannot be accessed out of this scpoe
		num_visitors[0] = num_visitors[6];
		num_visitors[6] = temp;
	}
	printf("[");
	for(int i=0, arr_len=sizeof(num_visitors)/sizeof(int); i<arr_len; ++i){
		printf("%d%s", num_visitors[i], i==arr_len-1? "":", ");}
	printf("]\n");
}
