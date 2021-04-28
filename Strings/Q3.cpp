#include <iostream>

using namespace std ;

int main(){
    string s;
    cin>>s;
    for(int i = s.length() ;  i >=0 ; i-- ){
        if( i == s.length()){
            s[i] = toupper(s[i]);
            cout<<s.length();
        }
        else{
        cout<<s[i];
        }
    }
}