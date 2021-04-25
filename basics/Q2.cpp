#include <iostream>

using namespace std ;

int main(){
    bool isComp = false ;
    int n ;
    cin>> n;
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            isComp = true ;
            cout<<"yes";
            break;
        }
    }
    if(isComp == false){
        cout<<"no";
    }
}