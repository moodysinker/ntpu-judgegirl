/* swap.h */

void swap(int *x, int *y);


/* swap.c */

#include "swap.h"
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
