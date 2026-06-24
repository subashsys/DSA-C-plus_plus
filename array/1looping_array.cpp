#include<iostream>
using namespace std;
int main(){
    int size=6;
    int height[size];

    cout<<"Enter 6 height elements\n";
    for(int i=0;i<size;i++){
        cin>>height[i];
    }
    cout<<"Your array elements are: ";
    for(int i=0;i<size;i++){
        cout<<height[i]<<"\t";
    }
return 0;
}
