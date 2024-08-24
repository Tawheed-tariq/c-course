#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Seconds{
    int seconds;
    public:
    Seconds(int s){
        seconds = s;
    }
    void convertToHours(){
        int hours = seconds/3600;
        seconds %= 3600;
        int minutes = seconds/60;
        seconds %= 60;
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main(){
    int sec;
    cout << "Enter seconds: ";
    cin >> sec;
    Seconds s(sec);
    s.convertToHours();
}