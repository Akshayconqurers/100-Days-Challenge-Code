#include<iostream>
using namespace std;

int linearsearch( int *arr, int n, int key){
    
    for( int i=0; i<n ; i++){
        
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[] = {1,3,4,6,9,3,5,7,4};
    
    int n = sizeof(arr)/sizeof(int);
    
    cout<< linearsearch(arr, n, 7) <<endl;
    return 0;
    
   
    
}
