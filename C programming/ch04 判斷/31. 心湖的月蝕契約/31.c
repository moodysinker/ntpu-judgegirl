#include <stdio.h>

int main(void){

    int n = 0;
    scanf("%d", &n);

    if(n % 4 == 0){
        printf("Silentium Lacus\n");
    }

    if(n % 4 == 1){
        printf("Milvus Solus\n");
    }

    if(n % 4 == 2){
        printf("Turres Geminae\n");
    }

    if(n % 4 == 3){
        printf("Tres Fauces\n");
    }

    return 0;
}
