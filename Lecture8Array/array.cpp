// Largest and smallest value of index no. print .  
#include <iostream>
using namespace std;
int main(){
    int num[] = { 12,24,35,45 ,10 ,80 ,65,67};
    
    int smallest = INT8_MAX , largest = INT8_MIN ,countl=0,counts=0;
    for(int i = 0;i<6 ;i++){
        if(num[i]<smallest ){
            smallest = num[i];
            counts = i;
            
        } 
        if(num[i]>largest){
            largest = num[i];
            countl = i;
        }  
    }
    cout<<"largest = "<< largest<<"inx of largest = "<<countl<<endl;
    cout<<"smallest="<<smallest<<"idx of smallest = "<<counts;
    
}