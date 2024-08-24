#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int p, q; //the value will be given to p first because it is declred first
        A(int x, int y):q(y),p(x) {
            cout<< "A constructor called" << endl;
        }
};


int main(){
    A obj(12 , 13);
    cout << obj.p << endl << obj.q << endl;
}