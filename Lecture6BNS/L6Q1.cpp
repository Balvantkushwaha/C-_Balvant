#include <iostream>
using namespace std;
int decBinary(int decNum){
    int pow =1,ans=0;
    while(decNum>0){
        int rem = decNum%2;
        decNum =decNum/2;
        ans+=(rem*pow);
        pow =pow*10;
    }
    return ans;
}
int main(){
    for(int i=1;i<=10;i++){
        cout<<decBinary(i)<<endl;
    }
    return 0;
}