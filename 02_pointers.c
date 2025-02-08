#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer) 

    float k = 5.232;
    float* k1 = &k;//jehetu * k print korte hoyeche tai amader ekhane print korbar somoy &k likhei korte hobe
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);


    printf("The value at address j is %d\n", *(&i));

    return 0;
}