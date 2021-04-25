#include <iostream>

using namespace std ;

int main(){
    int N, M ;
    cin>>N>>M;
    int sum = N + M;
    if(sum % 2 == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}