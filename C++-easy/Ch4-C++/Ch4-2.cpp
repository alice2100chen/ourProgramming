#include <iostream>

using namespace std;

int main(){
    int score_array[4] = {85, 92, 88, 96};
    int x = score_array[0]; // x會被設定為85
    cout << x << endl;

    score_array[0] = 95;    // score_array變成[95, 92, 88, 96]
    x = score_array[0];     // x會被設定為95
    cout << x << endl;

    return 0;
}

