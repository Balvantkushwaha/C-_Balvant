#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n pattern ";
    cin>>n;

    for(int i=0;i<n;i++){
         //char ch ='A';
         char ch = i+65;
        for(int j=i+1;j>0;j--){
             
             if(i+65>64){
                cout<<ch;
             }
            
            ch =ch-1;
        
        }
        
        cout<<endl;
    }
}