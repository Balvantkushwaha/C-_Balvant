// Q1 Waf to check if a number is prime3 or not. 
#include <iostream>
using namespace std;
// check prime or not function 
void checkPrime(int num){
    bool isPrime =true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
             isPrime = false;
        }
    }
    if(num==1){
        cout<<num<<" na hi  prime aur notprime";
    }
    if(isPrime==true){
        cout<<num<<" is prime no.";
    }
    else{
        cout<<num<<" is not prime no.";

    }
}
int main(){
    checkPrime(1);
    return 0;
}