#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == k)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}