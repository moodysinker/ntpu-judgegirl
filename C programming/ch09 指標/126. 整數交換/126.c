/* swap.h */

void swap(int *x, int *y);


/* swap.c */

#include "swap.h"
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


/* main.c */

#include <stdio.h>
#include "swap.h"
 
int main(){
 
    int a;
    int b;
 
    scanf("%d %d", &a, &b);   
    swap(&a, &b);
    printf("%d %d\n", a, b);
 
    return 0;
 
}
