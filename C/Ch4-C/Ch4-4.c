#include <stdio.h>

int main(){
    int num_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int x = num_array[0][2];    // x會變成3
    num_array[2][1] = -8;       // num_array[2][1]由8變成-8
    
    printf("%d\n", x);
    printf("%d\n", num_array[2][1]) ;

    return 0;
}
