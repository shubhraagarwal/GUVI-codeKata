#include<iostream>

using namespace std;

int main(){
    int n, m, x ;
    cin>>n>>m;
    x = m+n ;
    int arr1[n], arr2[m], mergedArr[x];

    for(int i = 0 ; i < n; i++){                                                  
        cin>>arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0 ; i< n ; i++){                                       //Using insertion sort to sort the arrays
        for (int j = i + 1 ; j < n ; j++){
            if(arr1[i]> arr1[j]){
                int temp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = temp ;
            }
        }
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < n; i++)
    {                                                                  //Using insertion sort to sort the arrays
        for (int j = i + 1; j < n; j++)
        {
            if (arr2[i] < arr2[j])
            {
                int temp = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = temp;
            }
        }
        mergedArr[i+n] = arr2[i];           
        
    }

    for(int i = 0 ; i < x ; i++){
        if(i < x-1){                                    //Using if-else to not print whitespace at the last element
        cout<<mergedArr[i]<<" ";
        }
        else{
            cout<<mergedArr[i];
        }
    }
    
    return 0;
}