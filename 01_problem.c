#include <stdio.h>

int main(){
    int i = 2;
    int * pointer = &i;
    printf("The address of the value is %u \n", &i);
    printf("The value of i is %d \n",*pointer);
    return 0;
}