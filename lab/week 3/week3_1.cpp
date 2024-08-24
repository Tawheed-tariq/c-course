//write a program to find element which occurs most frequently in array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_most_occured_element(int arr[], int n){
    vector<int> count(n);
    for(int i =0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] == arr[j])
                count[i]++;
        }
    }
    int max_count_index = 0;
    for(int i = 1; i<n; i++){
        if(count[max_count_index] < count[i])
            max_count_index = i; 
    }
    return max_count_index;
}
int main(){
    int n , *arr, max_count_index;
    cout << "enter number of elements: " ;
    cin >> n;
    arr = new int[n];
    cout << " Enter array elemetns : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    max_count_index = find_most_occured_element(arr,n);
    cout << "most occured eleemnt is : " <<  arr[max_count_index] << endl;
}