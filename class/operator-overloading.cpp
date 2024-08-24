#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class comp;
class integer{
    public:
    int v1;
    void setData(int a){
        this->v1 = a;
    }
    
    friend comp operator+(integer a);
    friend comp operator-(integer a);
};

class comp{
    int real, img;
    public:
    void setData(int a, int b){
        this->real = a;
        this->img = b;
    }
    void display(){
        cout << real << "+" << img << "i" << endl;
    }
    comp operator+(integer obj){
        comp temp;
        temp.real = real + obj.v1;
        temp.img = img;
        return temp;
    }
    comp operator-(integer obj){
        comp temp;
        temp.real = this->real - obj.v1;
        temp.img = this->img;
        return temp;
    }
    comp operator+(comp obj){
        comp temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    comp operator-(comp obj){
        comp temp;
        temp.real = this->real + obj.real;
        temp.img = this->img + obj.img;
        return temp;
    }
    comp operator*(const comp &obj){
        comp temp;
        temp.real = this->real*obj.real + this->img*obj.img;
        temp.img = this->real*obj.img + this->img*obj.real;
        return temp;
    }
};


int main(){
    comp c1, c3, c2;
    integer a;
    c1.setData(10, 12);
    a.setData(10);
    c3 = c1 - a;
    c3.display();
    c2 = c3+ c1;
    c2.display();
}