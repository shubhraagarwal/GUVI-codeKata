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
    int minTillNow = 0;
    int maxTillNow = 100;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minTillNow])
        {
            minTillNow = i;
        }
        else if (arr[i] > arr[maxTillNow])
        {
            maxTillNow = i;
        }
    }
    cout << maxTillNow << " " << minTillNow;
}