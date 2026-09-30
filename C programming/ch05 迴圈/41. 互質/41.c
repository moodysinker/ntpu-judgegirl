#include <stdio.h>

int Fgcd(int a, int b){
    while(b > 0){
        int tem = b;
        b = a % b;
        a = tem;
    }

    return a;
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);

    int gcd = Fgcd(a, b);

    if(gcd == 1){
        printf("兩數互質\n");
    } else {
        printf("兩數不互質\n");
    }

    return 0;
}
