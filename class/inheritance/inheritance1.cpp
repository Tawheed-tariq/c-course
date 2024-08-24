#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        A(){
            cout << "DEFAULT CONSTRUCTOR\n";
        }
        A(int x){
            cout << "Parameterised constructor";
        }
};
class B: public A{
    
    public:
        int A; 
        B(){};
        B(int x):A(x){ //if we have variable name same as that of parent class name , then the value to variable will be given here
            cout << "The value of a is "<<x<<endl;
        }

};
int main(){
    B obj(12);
    cout << obj.A;
}