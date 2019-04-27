#include <iostream>
#include <string>

using namespace std;

int main(){
    int num_2d_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    string animals_2d[2][3] = {
        {"長頸鹿", "獅子", "兔子"},
        {"樹葉", "肉", "紅蘿蔔"}
    };

    cout << num_2d_array[0][0] << " ";
    cout << num_2d_array[1][1] << endl;

    cout << animals_2d[0][1] << " ";
    cout << animals_2d[1][1] << endl;

    return 0;
}
