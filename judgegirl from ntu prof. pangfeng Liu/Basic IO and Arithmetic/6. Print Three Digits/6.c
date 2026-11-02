#include <stdio.h>

int main(void){

    int x;
    scanf("%d", &x);
  
    int a, b, c;
    a = x / 100;
    b = (x - a * 100) / 10;
    c = x % 10;

    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}
