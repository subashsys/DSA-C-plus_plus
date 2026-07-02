#include<iostream>
using namespace std;

void reversearray(int arr[],int size){
    int start=0, end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int num[]={2,3,4,5,6};
    int size=5;

    reversearray(num,5);
    
    cout<<"Reversed array are: ";
    
    for(int i=0;i<size;i++){
         cout<<num[i];
    }
    
}