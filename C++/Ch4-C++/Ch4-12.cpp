#include <iostream>
using namespace std;

int main(){
    double BMI = 22.5;
    if(BMI < 18.5){
        cout << "體重過輕也不算健康哦！" << endl;
    }
    else if(BMI >= 24){
        cout << "控制飲食、多運動會更健康哦！" << endl;
    }
    else{
     cout << "合適的體重，繼續保持哦！" << endl;
    }
    return 0;
}
