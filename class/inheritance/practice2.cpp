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

class E: public virtual A{
    public:
        E(){
            cout << "E constructor called" << endl;
        }
};

class C: public B{
    public:
        C(){
            cout << "C constructor called" << endl;
        }
};

class D: public E, public C{
    public: 
        D(){
            cout << " D constructor called" << endl;
        }
};

int main(){
    D obj;
}