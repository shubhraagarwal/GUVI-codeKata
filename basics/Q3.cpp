#include <iostream>

using namespace std;

int main(){
    int N,M, product, square;
    cin>>N>>M;
    product = N * M ;
    bool flag = true;
    for(int i = 1 ; i < product ; i++){
        if(i*i == product){
            cout<<"yes";
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"no";
    }
}