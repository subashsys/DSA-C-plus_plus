#include<iostream>
using namespace std;

void HelloWorld(){                        // valueReturnType functionName(){}
    cout<<"Hello World\n";                // kei return gardaina vane "void"
}
int valueofx(){
    int x=100;
    return x;
}
int calculatesum(int a, int b){
 return (a+b);
}
int main(){

   HelloWorld();  //function call gareko

   int x= valueofx();
   cout<<"Value of x is: "<<x;

   int sum=calculatesum(5,6);
   cout<<"\nSum of 2 number is: "<<sum;


return 0;
}
