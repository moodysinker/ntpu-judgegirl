#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    float ans = 0.0;
    for(int i = 1; i <= n; i++){
        ans += 1.0 / i;
    }

    printf("%.2f", ans);

    return 0;
}
