#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n pattern ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char ch ='A';
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch = ch+1;
        }
        cout<<endl;
    }
}