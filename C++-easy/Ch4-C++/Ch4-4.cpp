#include <iostream>

using namespace std;

int main(){
    int num_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int x = num_array[0][2];    // x會變成3
    num_array[2][1] = -8;       // num_array[2][1]由8變成-8
    
    cout << x << endl;
    cout << num_array[2][1] << endl;

    return 0;
}
