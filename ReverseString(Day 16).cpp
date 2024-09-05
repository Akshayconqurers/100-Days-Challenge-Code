#include<iostream>
using namespace std;

void ReverStr(string str){

if (str.length()==0){
    return;
}

ReverStr(str.substr(1));

cout << str[0];
}
int main(){
    
    string str = "Akshay";
    
    cout << "Reverse String : " << endl;
    
    ReverStr(str);
    
    return 0;
}
