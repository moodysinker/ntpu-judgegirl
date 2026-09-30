#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    float ans = 0.0;
    int den = 1;
    for(int i = 1; i <= n; i++){
        den *= i;
        ans +=(float) i / den;
    }

    printf("%.5f", ans);

    return 0;
}
