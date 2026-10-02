#include <stdio.h>

int main(void){

    int count = 0;
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        if(n % 2 == 1){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
