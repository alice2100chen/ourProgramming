#include <iostream>
#include <string>

using namespace std;

int main(){
    int grades[3][3] = {{100, 20, 85}, {95,99,75}, {89,73,92}};
    string names[3] = {"嘉明", "小美", "阿雄"};

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += grades[i][j];
        }
        cout << names[i] << " 總分為 " << sum << " 分" << endl;
    }

    return 0;
}
