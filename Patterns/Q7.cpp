#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - arr[i + 1] > 15 || arr[i] - arr[i + 1] < -15)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        cout << " ";
    }
    if (arr[n - 1] - arr[0] > 15 || arr[n - 1] - arr[0] < -15)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}