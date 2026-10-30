#include <stdio.h>
#include <string.h>

int main(void){

    char alphabet[500];
    int count = 0, len = 0;

    scanf("%s", alphabet);
    len = strlen(alphabet);

    for(int i = 0; i < len; i++){
        if(alphabet[i] == 'a' || alphabet[i] == 'A' || alphabet[i] == 'e' || 
           alphabet[i] == 'E' || alphabet[i] == 'i' || alphabet[i] == 'I' ||
           alphabet[i] == 'o' || alphabet[i] == 'O' || alphabet[i] == 'u' ||
           alphabet[i] == 'U'){
            count++;
           }
    }

    printf("%d", count);

    return 0;
}
