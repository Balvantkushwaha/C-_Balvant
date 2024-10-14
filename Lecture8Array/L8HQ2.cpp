// waf to swap the max & min number of an array .
#include <iostream>
using namespace std;
 void arrMinMaxInARR(int arr[] , int size ){
   int smallest = INT8_MAX, largest =INT8_MIN ,counts ,countl;
    for(int i= 0;i<size ;i++){
          if(arr[i]<smallest){
            smallest = arr[i];
            counts = i;
          }
          if(arr[i]>largest){
              largest = arr[i];
              countl =i;
          }
    }
    swap(arr[counts],arr[countl]);
    cout<<"smallest ="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
    
}
int main(){
    int arr[] = { 2,4,1,6,4,8};
    int size =6;
    arrMinMaxInARR(arr, size);
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}