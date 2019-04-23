#include <iostream>
#include <string>

using namespace std;

int main(){
    string animals[7] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};
    for(int i = 0; i < 7; i++){
        cout << animals[i] << endl;
    }

    return 0;
}
