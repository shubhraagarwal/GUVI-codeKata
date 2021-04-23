#include <iostream>

using namespace std ;

int main(){
    int size, window ;
    cin >> size ;
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    cin>>window;
    for( int i = 0 ; i<= size ; i++){
        bool flag ;

        for(int j = i ; j < i+ window ; j++){
            if(arr[j] < 0){
                if( i > 0){
                    cout << " ";
                }
                cout<< arr[j];
                flag = true ;
                break;
            }

        }
        if(!flag){
            if(i > 0){
                cout<<" ";
            }
            cout<<"0";
        }

        
        if(i >= size-window){
            break;
        }
    }

}