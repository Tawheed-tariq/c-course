#include<iostream>
using namespace std;
void delete_ele(int arr[], int n, int index){
    for(int i = index; i <n; i++){
        arr[i] = arr[i+1];
    }
}
int count(int arr[],int size, int start, int k){
    if(size == 1)
        return arr[0];
    start = (start +k)%(size);
    delete_ele(arr,size,start);
    return count(arr,size-1,start,k);
}

int main(){
    int *arr , n;
    cout << "Enter number of elements: "; 
    cin >> n;
    arr = new int[n];
    cout << "Enter array elements : ";
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(int);
    cout <<" answer after deleting elements: " << count(arr,size-1,1,2) << endl;
}