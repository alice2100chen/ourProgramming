#include <stdio.h>
int main(){
    double BMI = 22.5;
    if(BMI < 18.5){
        printf("體重過輕也不算健康哦！");
    }
    else if(BMI >= 24){
        printf("控制飲食、多運動會更健康哦！");
    }
    else{
        printf("合適的體重，繼續保持哦！");
    }
    return 0;
}
