#include <stdio.h>

int main(void){

    int odd[1000], even[1000];
    int a = 0, r = 0, odd_count = 0, even_count = 0;
    scanf("%d", &r);

    for(int i = 0; i < r; i++){
        scanf("%d", &a);
        if(a % 2 == 0){
            even[even_count++] = a;
        } else {
            odd[odd_count++] = a;
        }
    }

    for(int i = 0; i < odd_count; i++){
        printf("%d", odd[i]); 
        if(i != odd_count - 1){
            printf(" ");
        }
    }

    printf("\n");

    for(int i = 0; i < even_count; i++){
        printf("%d", even[i]); 
        if(i != even_count - 1){
            printf(" ");
        }
    }

    return 0;
}
