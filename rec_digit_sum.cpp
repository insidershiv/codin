#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int sol(int n)
{

    if (n < 1)
    {
        return sum;
    }
    else
    {
        int digit = n % 10;
        sum = sum + digit;
        return sol(n / 10);
    }
}
int main()
{
    int n;
    cin >> n;

    cout << sol(n);

    return 0;
}