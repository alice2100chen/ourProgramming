#include <stdio.h>
#include <math.h>

int main(){
    int a = 4;
    int b = 3;
    double c = pow(pow(a, 2) + pow(b, 2), 0.5);
    printf("%.1f\n", c);

    return 0;
}
