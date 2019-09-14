#include <iostream>
using namespace std;

int main() {
    int n = 3; // 求n!
    int product = 1; // 先設乘積變數product為1
    for(int i = 0; i < n; i++){ // i在每回合中分別為0,1,2,...,n-1
        product = (i+1) * product; // i+1在每回合中分別為1,2,3,...,n
    }
    cout << product << endl;
    return 0;
}
