#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();

void goodmorning(){
    printf("good morning \n");
}
void goodafternoon(){
    printf("good afternoon \n");
}
void goodevening(){
    printf("good evening\n");
}
int main(){
    goodmorning();
    goodafternoon();
    goodevening();
    
    return 0;
}
//printf is a library function