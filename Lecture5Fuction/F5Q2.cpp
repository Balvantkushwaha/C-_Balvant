#include <iostream>
using namespace std;
void printAllPrime(int num){
    for(int i=2;i<=num;i++){
        if(num%i==0){
            continue;
        }
        else{
            cout<<i;
        }
    }
}
int main(){
    printAllPrime(10);
    return 0;
}