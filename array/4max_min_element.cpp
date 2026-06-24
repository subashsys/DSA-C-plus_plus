#include<iostream>
using namespace std;
int main(){
    int i;
    int size=6;
    int height[size];
    
    cout<<"Enter 6 height elements\n";
    for( i=0;i<size;i++){
        cin>>height[i];
    }
//suru ko element ali thulo suppose garne, ani aru sanga compare garne,
// thulo cha vane max ko value update garne //minimum pani same logic
    int MAX=height[0]; 
    for(i=0;i<size;i++){
        if(height[i]>MAX){
            MAX=height[i];
        }
    }
    cout<<"\n Max element is: "<<MAX<< i;
    
return 0;
}


/*
Mathi simple logic use vako cha without any built-in function
height[0] lai smallest or larget mannu ko satta, INT_MIN(-infinity) use garne milcha->arko logic
int largest=INT_MIN;
large=min(height[i],largest) -> min() and max() are functions to compare
*/