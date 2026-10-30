#include <stdio.h>

int main(void){

    int n, m;

    while(scanf("%d%d", &n, &m) != EOF){
        if(n == 0 || m == 0 || m == 1){
            printf("Boring!\n");
            continue;
        }

        int a[1000];
        int flag = 0, bor = 0;

        while(n > 1){
            if(n % m != 0){
                printf("Boring!\n");
                bor = 1;
                break;
            }
            a[flag++] = n;
            n /= m;
        }

        if(bor == 1){
            continue;
        }

        if(a[flag - 1] != 1){
            a[flag] = 1;
            flag++;
        }

        for(int i = 0; i < flag; i++){
            printf("%d", a[i]);
            if(i != flag - 1){
                printf(" ");
            }
        }

        printf("\n");

    }

    return 0;
}
