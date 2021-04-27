#include <iostream>

using namespace std ;

int main(){
    string s;
    bool flag= true;
    cin>>s;
    for(int i = 0 ; i < s.length()/2 ; i++){
        if(s[i] != s[s.length() -1 - i] ){
            flag = false;
            break;        
        }
        
    }
    if(flag == false){
        cout<<"0";
    }
    else{
        cout<<"1";
    }

}