#include<iostream>
using namespace std ;

int main(){
    string str;
    getline(cin, str);
    for (int i = str.length() ; i >= 0 ; i--){
        char c = str[i];
        cout<<c ;
    }

    return 0;
}