#include <iostream>
#include <string>

using namespace std;

int main(){
    int num_visitors[7] = {70, 10, 14, 7, 25, 30, 50};
    string day_names[7] = {"日", "一", "二", "三", "四", "五", "六"};

    for(int day_index = 0; day_index < 7; day_index++){
        cout << "星期" << day_names[day_index] << "： " << num_visitors[day_index] << " 人" << endl;
    }

    return 0;
}
