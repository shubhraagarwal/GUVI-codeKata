#include <iostream>

using namespace std ;

int main(){

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i <n ; i++){
        cin>>arr[i];
    }
    int res = 0 ;


// For every element of the array
    for(int i = 1 ; i <n - 1 ; i++ ){
        int left = arr[i];       
        //Finding the maximum element on the left of the index 
        for(int j = 0 ; j<i ; j++){
            left = max(left, arr[j]);
        }
        int right = arr[i];
        // FInding the maximum element on the right of the index
        for(int j = i+1 ; j<n ; j++){
            right = max(right , arr[j]);
        }
        // Updating the max amount of air as the air accumulated by any block will be equal to the minimum height of the left and right block - the height of the own block  
        res = res + (min(left,right) - arr[i]);
    }
    cout<<res;
    return 0;
}