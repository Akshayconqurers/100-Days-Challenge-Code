#include<iostream>
using namespace std;

void print(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int n, int arr[]){
    
    for(int i = 1; i<n; i++){
        int curr=arr[i];
        int prev= i-1;
        
        while(prev >=0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(n, arr);
}

int main(){
    int arr[5] = {1,5,4,6,3};
    insertionSort(5, arr);
    return 0;
}

// Time Complexity = O(n^2)
