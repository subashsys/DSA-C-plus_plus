#include<iostream>
using namespace std;
int main(){
    int num[5];
    int el;
    bool flag;
    cout<<"Enter 5 elements of array:";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    cout<<"Enter element you want to search: ";
    cin>>el;
    for(int i=0;i<5;i++){
        if (num[i]==el){
            cout<<"Your element is at index:"<<i;
            flag=true;
        }
    }
    if(!flag){
    cout<<-1;
    } 
}