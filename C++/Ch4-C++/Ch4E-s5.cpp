#include <iostream>

using namespace std;

int recursive_add(int n){
    if(n <= 2){
        return 5;
    }
    return n + recursive_add(n - 3);
}

int main(){
    cout << recursive_add(15) << endl;

    return 0;
}
