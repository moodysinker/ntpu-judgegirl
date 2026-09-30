#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    int ans = 0, mid = 0;
    for(int i = 1; i <= n; i++){
        mid += i;

        ans += mid;
    }

    printf("%d", ans);

    return 0;
}
