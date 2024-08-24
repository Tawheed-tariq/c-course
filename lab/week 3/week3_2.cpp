//Ask user to enter element that should be deleted and then delete element.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void delete_ele(int *, int , int);
int main(){
    int n =7, ele, arr[n] = {1,2,3,4,5,6,7};
    cout << "Enter the element to delete" << endl;
    cin >> ele;
    delete_ele(arr, n, ele);
    n--;
    for(int i =0; i < n; i++){
        cout << arr[i] << "\t";
    }

}
void delete_ele(int arr[], int n, int data){
    int i = 0;
    while(arr[i] != data){
        i++;
    }
    cout << "deleted " << arr[i] << endl;
    for(; i <n; i++){
        arr[i] = arr[i+1];
    }
}