#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minTillNow = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minTillNow)
        {
            minTillNow = arr[i];
        }
    }
    cout << minTillNow;
}