#include <iostream>
using namespace std;

void PrintNums(int n){
    if(n==1){
        cout <<"1\n";
        return;
    }
     cout << n <<" \n";
    PrintNums(n-1);
   
}
int main(){
    PrintNums(1000);
    return 0;
}