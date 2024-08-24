#include <iostream>
using namespace std;

int binSearch( int *arr, int n, int key){
    int st = 0, end = n-1;
    
    while(st <= end){
        int mid = (st + end) / 2;
        if(arr[mid] == key) {
            return mid; //key found
        }else if(arr[mid] < key){
            st = mid+1; //2nd Half
        }else{
            end = mid - 1; //1st Half
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {2,4,5,6,7,4,3,2,9,57,89,49};
    int n = sizeof(arr) / sizeof(int);
    
    cout << binSearch(arr, n, 57)<< endl;
    return 0;
}
