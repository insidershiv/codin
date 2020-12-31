#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n;
    // cin >> n;
    int  n = 5 ;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {

            cout << " * ";
        }
        cout << "\n";

        for (int k = i; k >= 1; k--)
        {
            cout << " ";
        }
    }

    return 0;
}