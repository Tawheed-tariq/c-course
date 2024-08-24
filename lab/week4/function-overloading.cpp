#include<iostream>
using namespace std;
//function overloading
int add(int a , int b, int c ){
    return a+b+c;
}

int add(int a , int b){
    return a+b;
}
//default argument
int add_2_sub_3rd(int a , int b, int c = 0){
    return a+b-c;
}

int main(){
    int a , b;
    a = 10;
    b =5;
    cout << add(a,b, 13) << endl;
    cout << add_2_sub_3rd(a,b,4);
}