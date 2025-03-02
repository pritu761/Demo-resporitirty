// Write a C Program to Display All Prime Numbers Between 1 to 100
#include <stdio.h>

int main(){
    int num,count=0;
    printf("Prime Numbers Between 1 to 100 are:\n");
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2 && i!=1){
            printf("%d ",i);
        }
        count=0;
    }
    return 0;
}