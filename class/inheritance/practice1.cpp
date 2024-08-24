#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        A(){
            cout << "a constructor called" << endl;
        }
};

class B: public virtual A{
    public:
        B(){
            cout << "B constructor called" << endl;
        }
};

class C: virtual public A{
    public:
        C(){
            cout << "C constructor called" << endl;
        }
};

class D: public B, public C{
    public: 
        D(){
            cout << " D constructor called" << endl;
        }
};


int main(){
    D obj;
}
