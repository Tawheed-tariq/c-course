//Find 2nd largest number in an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int max = INT_MIN; // we choose max as the smallest number 
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            arr[i] = INT_MIN;
        }
    }
    max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int secondSmallest(int arr[], int n){
    int min = INT_MAX; 
    for(int i = 0; i < n; i++){
        if(arr[i] > min){
            min = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            arr[i] = INT_MAX;
        }
    }
    min = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {9,4,1,3,2,6,5,8,9};
    int second = secondLargest(arr, 9); 
    cout << "second maximun in array is : " << second << endl;
}

