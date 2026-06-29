#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char num[100];
    scanf("%s", num);
    
    int oddSum = 0;
    int evenSum = 0;
    int len = strlen(num);

    for(int i = len - 1; i >= 0; i--){
        int digit = num[i] - '0';

        if(i % 2 == 0){
            oddSum += digit;
        } else {
            evenSum += digit;
        }
    }

    printf("%d\n", abs(oddSum - evenSum));

    return 0;
}
