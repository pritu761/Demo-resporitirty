#include <stdio.h>
//Function prototype
 int sum(int,int);
 //Function type
    int sum(int x, int y){
        printf("The sum of the two numbers is %d",x+y);
    }
int main(){
   
    sum(2,5);
    return 0;
}