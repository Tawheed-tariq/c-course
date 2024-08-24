#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class string2;
class string1;
class string1{
    string s;
    public:
    string1(string str){
        s = str;
    }
    friend string compare(string1, string2);
};
class string2
{
private:
    string s;
public:
    string2(string str);
    friend string compare(string1, string2);
};

string2::string2(string str)
{
    s = str;
}

string compare(string1 str1 , string2 str2){
    if(str1.s.length() > str2.s.length()){
        return str1.s;
    }else{
        return str2.s;
    }
}

int main(){
    string str1 , str2;
    cout << "enter two strings";
    cin >> str1 >> str2;
    string1 one(str1);
    string2 two(str2);
    cout << "The longest of two strings is : " << compare(one ,  two);

}
