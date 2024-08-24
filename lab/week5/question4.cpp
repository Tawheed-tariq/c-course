#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    int convertToSeconds(){
        int ans;
        ans = seconds + hours*3600 + minutes*60;
        return ans;
    }
};

int main(){
    int h , m , s;
    cout << "enter hours , minutes and seconds : ";
    cin >> h >> m >> s;
    Time t(h,m,s);
    cout << "conversion to seconds : " << t.convertToSeconds() << endl;

}