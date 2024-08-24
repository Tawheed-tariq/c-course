#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class hello{
    public:
    hello(T a, T b){
        cout << "hello developer, you entered  " << a  << "  " << b << endl;
    }
};

int main(){
    hello<int> obj(2, 7);
    hello<float> obj1(2.345, 4.1230);
}