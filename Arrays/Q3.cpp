#include <iostream>

using namespace std ;

int main(){
    int n, air=0;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        air++;
    }
    cout<<air;
    return 0;
}