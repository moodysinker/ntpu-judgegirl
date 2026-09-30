// Hint : 奇數行地奇數個是1，偶數行第偶數個是0

#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
  
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if((i + j) % 2 == 0){
                printf("1");
            } else {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
