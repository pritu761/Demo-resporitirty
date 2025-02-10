// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
#include <stdio.h>

int main(){
    int num, first_digit, last_digit;
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    first_digit = num / 1000;
    printf("Sum of first and last digit: %d\n", first_digit + last_digit);
    return 0;
}