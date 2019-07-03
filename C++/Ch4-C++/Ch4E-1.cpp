#include <iostream>
#include <string>

using namespace std;

int main(){
    string contest_names[3] = {"游泳", "單車", "跑步"};
    string times[3] = {"30分鐘", "1小時", "1小時半"};

    for(int i = 0; i < 3; i++){
        cout << contest_names[i] << " : " << times[i] << endl;
    }

    return 0;
}
