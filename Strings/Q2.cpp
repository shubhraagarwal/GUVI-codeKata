#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i = 0 ; i < s.length() ; i++){
        char x = s.at(i);
        sum = sum + int(x);
    }
    cout<<sum;
    
}