// Sum of digits of a number
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number :");
    if(scanf("%d",&num)!=1){
        printf("The number is not valid");
    }
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("The sum is :%d\n",sum);
    return 0;
}