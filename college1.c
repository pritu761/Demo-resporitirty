#include <stdio.h>

int main(){
    int a;
    printf("Enter the number whose sum of digits is to be calculated\n");
    scanf("%d", &a);
    int b = 0;
    while (a != 0) {
        b += a % 10;
        a /= 10;
    }
    printf("Sum of digits: %d\n", b);
    return 0;
}