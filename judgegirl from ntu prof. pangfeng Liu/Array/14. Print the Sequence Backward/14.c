#include <stdio.h>

int main(void){

    int a[1000];
    int r = 0;
    scanf("%d", &r);

    for(int i = 0; i < r; i++){
        scanf("%d", &a[i]);
    }

    for(int i = r - 1; i >= 0; i--){
        printf("%d", a[i]); 
        if(i != 0){
            printf(" ");
        }
    }

    return 0;
}
