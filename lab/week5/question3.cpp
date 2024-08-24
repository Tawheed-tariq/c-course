#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class DB;
class DM{
    float meteres;
    float centimeteres;
    public:
    DM(float m, float cm){
        meteres = m;
        centimeteres = cm;
    }
    friend void add(DM , DB );
};
class DB{
    float feet;
    float inches;
    public:
    DB(float ft, float in){
        feet = ft;
        inches = in;
    }
    friend void add(DM , DB );
};

void add(DM obj1, DB obj2){
    int cm = 30.48*(obj2.feet) + 2.54*(obj2.inches);
    int m = cm/100;
    cm = cm%100;
    obj1.meteres = obj1.meteres + m;
    obj1.centimeteres = obj1.centimeteres + cm;
    if(obj1.centimeteres > 100){
        obj1.centimeteres -= 100;
        obj1.meteres += 1;
    }
    cout << "distance =" << obj1.meteres << "." << obj1.centimeteres;
}

int main(){
    int m , c, i, f;
    cout << " enter first distance in meters in and centimeters: ";
    cin >> m >> c;
    cout << "enter second distance in foot and inches: ";
    cin >> f >> i;
    DM A(m,c);
    DB B(f,i);
    add(A,B);

}