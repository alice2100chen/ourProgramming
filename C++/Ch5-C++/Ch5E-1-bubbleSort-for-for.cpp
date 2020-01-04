#include <iostream>

using namespace std;

void print_array(int data[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    int data[4] = {24, 9, 13, 2};
    int data_count = sizeof(data) / sizeof(int);
    for(int i = 0; i < data_count - 1; i++){
        for(int j = 0; j < data_count-1-i; j++){
            if(data[j] > data[j+1]){
                int temp = data[j];             
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    print_array(data, data_count);

    return 0;
}
