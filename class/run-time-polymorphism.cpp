#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public: 
        int x;
        virtual void display(){
            cout << " display of A" << endl;
        }
};
class B : public A{
    public:
        int x;
        void display(){
            cout << "display of B" << endl;
        }
};

int main(){
    A objA;
    B objB;
    A *ptr = &objB;
    objB.display();
    ptr->display();
}