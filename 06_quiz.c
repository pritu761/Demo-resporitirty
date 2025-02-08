#include <stdio.h>
float avg(int,int,int);
float avg(int a, int b, int c){
    int sum = a+b+c;
    float final = sum/3.0;
    return final;
}
int main(){
    int l=5,m=7,n=8;
    printf("Print the average of the three numbers is %f",avg(l,m,n));
    return 0;
}