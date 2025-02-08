// If a five-digit number is input through the keyboard, write a program to print a new
// number by adding one to each of its digits. For example if the number that is input is
// 12391 then the output should be displayed as 23402.
#include <stdio.h>

int main() {
    int num, digit, new_num = 0, place = 1;
    
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    

    while (num > 0) {
        digit = num % 10; 
        digit = (digit + 1) % 10;  
        new_num = digit * place + new_num; 
        num /= 10; 
        place *= 10; 
    }

    
    printf("The new number after adding 1 to each digit is: %d\n", new_num);
    
    return 0;
}
