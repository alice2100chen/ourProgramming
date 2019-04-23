#include <stdio.h>

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void print_array(int arr[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        printf("%d ", arr[i]);}
    printf("\n");
}

int main(){
    int num_visitors[7] = {70, 10, 14, 7, 25, 30, 50}; // 索引0~6代表星期日到六
    print_array(num_visitors, 7);

    swap(num_visitors, 0, 6);
    print_array(num_visitors, 7);

    return 0;
}

