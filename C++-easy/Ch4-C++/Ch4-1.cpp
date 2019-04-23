#include <iostream>
#include <string>

using namespace std;

int main(){
    int score_array[4] = {85, 92, 88, 96};
    string animals[7] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

    for(int i = 0; i < 4; i++){
        cout << score_array[i] << " ";
    }
    cout << endl;

    for(int i=0; i < 7; i++){
        cout << animals[i] << " ";
    }
    cout << endl;

    return 0;
}
