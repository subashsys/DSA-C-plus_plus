#include<iostream>
using namespace std;
int main(){
    int num[5];
    
    cout<<"Enter 5 elements of array:";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    cout<<"Reversed array are: ";
    
    for(int i=4;i>-1;i--){
         cout<<num[i];
    }
    
}