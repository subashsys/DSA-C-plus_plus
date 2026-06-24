#include<iostream>
using namespace std;

void changing(int num[],int size){
    cout<<"After this function\n";
    for (int i=0;i<size;i++){
        num[i]=num[i]*2;
    }

}
int main(){
    int num[]={2,4,6,8};
    int size=4;
    changing(num,4);

    //function le kaam garisakepachi
    cout<<"Output is\n";
     for (int i=0;i<size;i++){
        cout<<num[i]<<"\t";
    }


return 0;
}
 
//array ko value haina referecne pathaayo, so original value nai change gardyo