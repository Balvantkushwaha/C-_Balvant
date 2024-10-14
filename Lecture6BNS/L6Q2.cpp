#include <iostream>
using namespace std;
int BinToDecimal(int BinaryNum){
    int ans =0 ,pow=1;
    while (BinaryNum>0){
        int rem = BinaryNum%10;
        ans+=rem*pow;
        BinaryNum/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    cout<<BinToDecimal(110);
    return 0;
}