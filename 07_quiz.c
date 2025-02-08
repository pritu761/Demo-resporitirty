#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %.2f", c, c2f(c));//percentage .2f will give us the floating point number upto 2 decimal places
    return 0;
}