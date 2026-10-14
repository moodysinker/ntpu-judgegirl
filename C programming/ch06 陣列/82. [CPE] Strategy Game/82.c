#include <stdio.h>

int main(void){

    while(1){
        int j, r;
        scanf("%d%d", &j, &r);
        if(j == 0 || r == 0){
            break;
        }

        int point[j];
        for(int i = 0; i < j; i++){
            point[i] = 0;
        }

        for(int i = 0; i < r; i++){
            for(int k = 0; k < j; k++){
                int score;
                scanf("%d", &score);
                point[k] += score;
            }
        }

        int max = 0, index = 0;
        for(int i = 0; i < j; i++){
            if(point[i] >= max){
                max = point[i];
                index = i;
            }
        }

        printf("%d\n", index + 1);

    }

    return 0;
}
