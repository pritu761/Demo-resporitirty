// write a program to reverse a number
#include <stdio.h>
int main(){
    int num,rev=0;
    printf("Enter A Number:");
    scanf("%d",&num);
    if(num<=0){
        printf("Enter A Valid Number");
        return 1;
    }
    while(num){
        rev = rev *10 + num%10;
        num/=10;

    }
    printf("%d",rev);
    return 0;
}