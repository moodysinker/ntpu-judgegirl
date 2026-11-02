#include <stdio.h>

int main(void){

    int h, w, d;
    scanf("%d%d%d", &h, &w, &d);
    int sur = 2 * (h * w + w * d + h * d);
    printf("%d\n%d", sur, h * w * d);

    return 0;
}
