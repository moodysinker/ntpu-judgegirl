#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 2; i <= n; i++){

        int sum = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }

        if(sum == i && count == 0){
            printf("%d", i);
            count++;
        } else if (sum == i){
            printf(" %d", i);
        }

    }

    return 0;
}
