#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.length();
    putchar(toupper(s[x - 1]));
    for (int i = x - 2; i >= 0; i--)
        cout << s[i];

    return 0;
}