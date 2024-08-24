#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2;
    cout << "enter two numbers" << endl;
    cin >> num1 >> num2;
    try{
        if(num2 !=0 )
            cout << num1 /num2 << endl;
        else  
            throw(num2); 
    }
    catch(int num){
        cout << "denominator" << num <<" cannot be zero" << endl;
    }
}