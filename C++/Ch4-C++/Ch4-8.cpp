#include <iostream>
#include <string>

using namespace std;

int main(){
    string animals_2d[2][3] = {
        {"長頸鹿", "獅子", "兔子"},
        {"樹葉", "肉", "紅蘿蔔"}
    };

    for(int i = 0; i < 2; i++){     // 外層控制animals_2d第i個元素(陣列)
        for(int j = 0; j < 3; j++){ // 外層控制animals_2d第i個元素(陣列)
            cout << animals_2d[i][j] << endl;
        }
    }

    return 0;
}
