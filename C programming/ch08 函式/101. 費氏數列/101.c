/* getFib.h */

void getFib(int N);


/* getFib.c */

#include "getFib.h"
void getFib(int N) {
    int x = 1, y = 1, z = 0;
    for(int i = 0; i < N; i++){
        if(i == 0){
            printf("0");
        } else if(i == 1 || i == 2){
            printf(" 1");
        }else {
            z = x + y;
            printf(" %d", z);
            x = y;
            y = z;
        }
    }
}


/* main.c */

#include <stdio.h>
#include "getFib.h"
 
int main() {
    int N;
    scanf("%d", &N);
    getFib(N);
 
    return 0;
}
