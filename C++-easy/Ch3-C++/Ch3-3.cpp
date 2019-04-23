#include <iostream>

using namespace std;

int main(){
    int x = 10 + 5;            // 加:x變成15
    int y = 20 - x;            // 減:y變成5
    int z = x * y;             // 乘:z變成75
    double q = (double) x / y; // 除:q變成3
    cout << x << " " << y << " " << z << " " << q << endl;
    
    return 0;
}
