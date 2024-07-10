/* #include <iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    cout<<"Sum of num1 and num2: "<<sum<<"\n";
    }
int add(int num1,int num2,int num3){
    int sum_of_three=num1+num2+num3;
    cout<<"Sum of num1 and num2: "<<sum_of_three<<"\n";
    }
int main(){
    add(2,3);
    add(2,3,5);
    return 0;
} */
// Function overloading- Using same function more than 1 time by using different parameters.
// Polymorphism- Is is an concept in oop's that allows objects of different types to be treated as objects of a common type.
// Compile time polymorphism- Object bound with function at compile time.
// Run time polymorphism- Object bound with function at run time.

// Use cases for function overloading-
// -
// -

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for (int n=a;n<=b;n++){
    if (n>=1 || n<=9){
        if (n==1){
        cout<<"one"<<endl;
        }
        if (n==2){
        cout<<"two"<<endl;
        }
        if (n==3){
        cout<<"three"<<endl;
        }
        if (n==4){
        cout<<"four"<<endl;
        }
        if (n==5){
        cout<<"five"<<endl;
        }
        if (n==6){
        cout<<"six"<<endl;
        }
        if (n==7){
        cout<<"seven"<<endl;
        }
        if (n==8){
        cout<<"eight"<<endl;
        }
        if (n==9){
        cout<<"nine"<<endl;
        }
    else if(n>9)
        if (n%2==0){
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
    }
    return 0;
}
