#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);

    if(a > b){
        int tem = b;
        b = a;
        a = tem;
    }

    int gcd = 1;
    printf("1");
    for(int i = 2; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            printf(" %d", i);
            gcd = i;
        }
    }

    printf("\n");
    printf("%d", gcd);

    return 0;
}
