#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 5 == 0){
            continue;
        } else if (i % 7 == 0 || i % 10 == 7){
            sum += (i * 2);
        } else {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
