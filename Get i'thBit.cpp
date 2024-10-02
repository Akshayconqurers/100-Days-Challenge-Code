#include<iostream>
using namespace std;

int getith(int num , int i){
    int bitmask = 1 << i;
    
    if(!(num & bitmask)){
        return 0;
    }else{
    return 1;
}
}

int main(){
    
    cout<< getith(7 , 1)<<endl;
    return 0;
}
