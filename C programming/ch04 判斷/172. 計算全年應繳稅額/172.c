#include <stdio.h>

int main(void){

    int n = 0, tax = 0;
    scanf("%d", &n);

    if(n < 560000){
        tax = n * 0.05;
    } else if(n >= 560000 && n < 1260000){
        tax = n * 0.12 - 39200;
    } else if(n >= 1260000 && n < 2520000){
        tax = n * 0.2 - 140000;
    } else if(n >= 2520000 && n < 4720000){
        tax = n * 0.3 - 392000;
    } else if(n >= 4720000){
        tax = n * 0.4 - 864000;
    }

    printf("全年應繳稅額為： %d 元\n", tax);

    return 0;
}
