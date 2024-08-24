//write a program to merge two sorted array into one sorted array.
#include<bits/stdc++.h>
using namespace std;
vector<int> merge(int arr1[], int n, int arr2[], int m){
    int index1 = 0, index2 = 0;
    vector<int> ans;

    while(index1 < n && index2 <m){
        //start from the index 0 of arr1 and arr2 
        if(arr1[index1] < arr2[index2]){
            //if element of arr1 is smaller it will be 
            //added and index will be increased by one
            ans.push_back(arr1[index1++]);
        }
        else{
            //if element of arr2 is smaller then add it 
            //and increase the index by one
            ans.push_back(arr2[index2++]);
        }
    }

    while(index1 < n){
        ans.push_back(arr1[index1++]);
    }

    while(index2 < m){
        ans.push_back(arr2[index2++]);
    }
    return ans;
}

int main(){
    int n1, n2, *arr1, *arr2;
    cout << " enter number of elements: " ;
    cin >> n1;
    arr1 = new int[n1];
    cout << " enter array elements: " ;
    for(int i = 0; i < n1 ;i ++){
        cin >> arr1[i];
    }
    cout << " enter number of elements: " ;
    cin >> n2;
    arr2 = new int[n2];
    cout << " enter array elements: " ;
    for(int i = 0; i < n2 ;i ++){
        cin >> arr2[i];
    }
    cout << "merged array : " << endl;
    vector<int> output = merge(arr1,n1,arr2,n2);
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << "\t";
    }
    return 0;
}