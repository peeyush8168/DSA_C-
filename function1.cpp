// Create a class add any 2 function/ user defined and call this function in main.
#include<iostream>
#include "myfunction1.h"
using namespace std;
void function1::input(){
cout<<"Enter the number: \n";
cin>>a>>b;
}
void function1::show(){
cout<<"\n"<<a<<" "<<b;
}
int main(){
    //cout<<"division function: "<<div(20,10)<<endl;
    //cout<<"multiplication function: "<<mul(10,20)<<endl;
    function1 obj;
    obj.input();
    obj.show();
    return 0;

    return 0;
}

