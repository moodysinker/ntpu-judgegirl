#include <stdio.h>

int main(void){

    double x, cos = 1.0;
    scanf("%lf", &x);

    /* numerator / denominator */
    double num = 1.0;
    double den = 1.0;
    int flag = 1; // flag 控制正負號

    // 照題目只取前 10 項最多就 80 分，所以拉到 30 項
    for(double i = 2.0; i <= 62.0; i = i + 2.0){
        num = num * x * x;
        den = den * (i - 1) * i;

        if(flag % 2 != 0){
            cos -= (num / den);
        } else {
            cos += (num / den);
        }

        flag++;
    }

    if(cos >= 0.999998 || cos <= -0.999998){
        printf("%g", cos);
    } else {
        printf("%.4lf", cos);
    }
    

    return 0;
}
