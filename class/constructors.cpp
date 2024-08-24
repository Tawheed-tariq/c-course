#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class test{
    public:
    test(){
        cout << "default constructor called" << endl;
    }
    test(int a){
        cout << "parametrized constructor called with passed value: " << a << endl;
    }
    test(int a, int b){
        cout << "parametrized constructor with two values (" << a <<"," << b << ") called" << endl;
    }
    ~test(){
        cout << "destructor called"<< endl;
    }
};

int main(){
    test t;
    test t1(10);
    test t2(20,12);
}