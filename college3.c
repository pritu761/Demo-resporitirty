// A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
// withdrawn is input through the keyboard in hundreds, find the total number of currency
// notes of each denomination the cashier will have to give to the withdrawer.

#include <stdio.h>

int main(){
    int amount , remaining_amount, notes_100, notes_50,notes_10;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount);

    amount*=100;//since the amount is in hundreds
    notes_100 = amount / 100;
    remaining_amount = amount % 100;

    notes_50 = remaining_amount / 50;
    remaining_amount = remaining_amount % 50;

    notes_10 = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;

    printf("Number of 100 notes: %d\n", notes_100);
    printf("Number of 50 notes: %d\n", notes_50);
    printf("Number of 10 notes: %d\n", notes_10);

    return 0;
}