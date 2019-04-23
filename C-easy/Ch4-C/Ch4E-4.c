#include <stdio.h>

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
    printf("%d\n", gcd(8, 12));

    return 0;
}
