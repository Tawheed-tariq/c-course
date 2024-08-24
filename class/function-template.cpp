#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    int num1, num2;
    float num3 ,num4;
    cout << "enter two integers and two floats" << endl;
    cin >> num1 >> num2;
    cin >> num3 >> num4;
    cout << "addition of integers " << add<int>(num1, num2) << endl;
    cout << "addition of floats " << add<float>(num3, num4) << endl;
}