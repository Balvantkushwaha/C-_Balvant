#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n pattern ";
    cin>>n;
    // top pattern
    for(int i=0;i<n;i++){
        // start
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
      //space 
      for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
      }
      for(int j=0;j<i+1;j++){
         cout<<"*";
      }
        cout<<endl;
    }
    // bottom pattern
    for(int i=n-1;i>0;i--){
        // start
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
      //space 
      for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
      }
      for(int j=0;j<i+1;j++){
         cout<<"*";
      }
        cout<<endl;
    }
}