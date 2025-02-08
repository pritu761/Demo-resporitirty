#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4 when from right to left compiler working
    // 4 5 5 when from left to right compiler working
    return 0;
}