#include <stdio.h>

void swap(int a[], int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void print_array(int arr[], int arr_len){
	printf("[");
	for(int i=0; i<arr_len; ++i){
		printf("%d%s", arr[i], i==arr_len-1? "":", ");}
	printf("]\n");
}

int main(){
	int num_visitors[] = {70, 10, 14, 7, 25, 30, 50};
	print_array(num_visitors, 7);

	swap(num_visitors, 0, 6);
	print_array(num_visitors, 7);
}

