// waf to print all the unique values in an array.
#include <iostream>
#include <array>
using namespace std;
void uniqueValueInArray(int arr[] , int size ){
    for(int i=0;i<size;i++){
       // int j ;
       // for( j=0;j<i;j++){
            // if(arr[i] == arr[j])
            //     break;
            // if(i == j)
            // cout<<arr[i]<<" ";
        while(i<size-1 && arr[i]=arr[i+1])
          i++;
        
    
        cout<<arr[i]<<" ";
           
      
       
    }
}
int main(){
    int num[] = {1,2,4,5,3,2,5,3,1};
    int size = sizeof(num)/sizeof(num[1]); // array length  
    uniqueValueInArray(num , size);
}
   