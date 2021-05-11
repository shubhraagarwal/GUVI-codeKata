#include <iostream>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    for (int i = 1; i <= R; i++)
    {
        if (i == 1 || i == R)
        {
            for (int j = 1; j <= C; j++)
            {
                cout << "*";
                if (j < C)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= C; j++)
            {
                if (j == 1 || j == C)
                {
                    cout << "*";
                    if (j < C)
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}
