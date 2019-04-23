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

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << num_2d_array[i][j] << " ";
        }
        cout << "; ";
    }
    cout << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << animals_2d[i][j] << " ";
        }
        cout << "; ";
    }
    cout << endl;

    return 0;
}
