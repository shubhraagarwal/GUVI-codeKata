#include <iostream>

using namespace std;

int main(){
    int arr[10];
    for(int i = 0 ; i< 10 ; i++){
        cin>>arr[i];
    }
    int minimumTillNow = arr[0] ;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] < minimumTillNow){
            minimumTillNow = arr[i];
        }
    }
    cout<<minimumTillNow ;

}