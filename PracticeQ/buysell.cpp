#include <iostream>
using namespace std;
int minValue(int x ,int n){
    if(x<n){
      return  x;       
    }
    else{
        return n;
    }
}
int maxValue(int x ,int n){
    if(x<n){
        return n;
    }
    else{
        return x;
    }
}

int main(){
     int prices[] = {7,10,5,30,60,4};
     int size = sizeof(prices)/sizeof(prices[0]);
     int maxiProfit = 0 , BestBuy = prices[0];
    // cout<<size;
   // int minV = maxValue(5,3);
    /// cout<<minV;
     for(int i=1;i<size;i++){
        if(prices[i]>BestBuy){
            int profit = prices[i]-BestBuy;
            maxiProfit = maxValue(maxiProfit ,profit);
        }
        BestBuy = minValue(BestBuy,prices[i]);

     }
     cout<<"Maximum profit = "<<maxiProfit<<endl;
     cout<<"Best buy stock = "<<BestBuy;

}  