#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int start = 0, end = n - 1;
    while (start < end)
    {
        s[start] ^= s[end];
        s[end] ^= s[start];
        s[start] ^= s[end];
        start++;
        end--;
    }
    cout << s << endl;
    return 0;
}