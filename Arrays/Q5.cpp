#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    arr[0] = 1000;
    for(int i =1 ; i < n ; i++){
        int savingThisMonth = (arr[i - 1] - arr[i-2]) + (arr[i-2]  - arr[i-3]);
        cout<<savingThisMonth<<endl ;
    }

}