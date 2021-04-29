#include <iostream>

using namespace std;

int main(){
    string s, str;
    cin>>s;
    int j = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] != s[i+1]){
            str[j]= s[i];
            cout<<str[j];
            j++ ;            
        }
        else{
            i++ ;
        }
    }
    
}