// waf to calculate sum & product of all numbers in an array.
#include <iostream>
using namespace std;
void calcuSumProd(int arr[], int size){
    int sum = 0 ,product = 1;
    for(int i=0;i<size;i++){
          sum+=arr[i];
          product*=arr[i];
    }
    cout<<"sum = "<<sum;
    cout<<"product =" <<product;
}
int main(){
    int arr[] = { 1,5,6};
    int size = 3;
    calcuSumProd(arr,size);
    return 0;    
}