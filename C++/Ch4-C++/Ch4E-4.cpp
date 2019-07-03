#include <iostream>

using namespace std;

int gcd(int p, int q){
    if(p < q){
        int temp = p;
        p = q;
        q = temp;
    }
    int r = p % q;
    if(r == 0){
        return q;
    }
    else{
        return gcd(q, r);
    }
}

int main(){
    cout << gcd(8, 12) << endl;

    return 0;
}
