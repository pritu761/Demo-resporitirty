#include <stdio.h>

int main() {
    int num, num1 = 1, num2 = 1, next = 0;

    printf("Enter the number of terms in the Fibonacci series: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("\nInvalid Input\n");
        return 1; 
    }

    if (num == 1) {
        printf("\n%d\n", num1);   
        return 0;
    }

    if (num == 2) {
        printf("\n%d %d\n", num1, num2);  
        return 0;
    }

    printf("\n%d %d ", num1, num2);

    for (int i = 3; i <= num; i++) {
        next = num1 + num2;
        printf("%d ", next);
        num1 = num2;
        num2 = next;
    }
    // printf("\n");  
    return 0;
}
