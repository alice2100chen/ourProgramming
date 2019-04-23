#include <iostream>

using namespace std;

int main(){
    int grades[7] = {40, 80, 75, 20, 96, 69, 50};
    int lower_60 = 0;
    int higher_90 = 0;

    for(int i = 0; i < 7; i++){
        if(grades[i] > 90){
            higher_90++;
        }
        else if(grades[i] < 60){
            lower_60++;
        }
    }

    printf("<60分: %d 個\n", lower_60);
    printf(">90分: %d 個\n", higher_90);

    return 0;
}
