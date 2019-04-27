#include <iostream>

using namespace std;

int main(){
    int score_array[4] = {95, 92, 88, 96};  // 陣列中有4個元素
    // for迴圈會執行cout 4次，因為0,1,2,3共有4個數值
    // i在每一回合的值分別是0, 1, 2, 3
    for(int i = 0; i < 4; i++){
        cout << score_array[i] << endl;
    }

    return 0;
}
