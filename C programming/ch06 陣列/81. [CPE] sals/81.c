#include <stdio.h>

int main(void){

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n, a[1000];
        scanf("%d", &n);

        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }

        int sum = 0;
        for(int k = 0; k < n - 1; k++){
            int count = 0;
            for(int m = 0; m <= k; m++){
                if(a[m] <= a[k + 1]){
                    count++;
                }
            }
            sum += count;
        }

        printf("%d\n", sum);
    }

    return 0;
}
