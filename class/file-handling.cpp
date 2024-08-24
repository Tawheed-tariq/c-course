#include<iostream>
#include<bits/stdc++.h>
//code to read each line of file1 and file2 and store them in file.txt
#include<fstream>
using namespace std;
int main(){
    string str1, str2;
    ifstream file1 , file2;
    ofstream file;
    file1.open("file1.txt");
    file2.open("file2.txt");
    file.open("file.txt");
    while(!file1.eof() && !file2.eof()){
        getline(file1, str1);
        getline(file2, str2);
        file << str1 << endl;
        file << str2 << endl;
    }
    file.close();
    file1.close();
    file2.close();
}
