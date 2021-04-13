#include<iostream>

using namespace std;

int main(){
    int size,sum = 0 ;
    cin>>size;
    int arr[size];
    for(int i =0 ; i<size ; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }

    if(sum %2 == 0 && sum %3 == 0 && sum %5 == 0){
        cout<<1 ;
    }
    else {
        cout<<0 ;
    }
    return 0 ;
}