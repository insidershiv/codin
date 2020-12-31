#include <bits/stdc++.h>
using namespace std;

double expo(double a, long long int n)
{
    if (n == 1)
        return a;

    if (a == 0)
    {
        return 0;
    }

    if (n == 0)
        return 1;

    if (n < 1)
    {
        double rs = 1.0;
        double c = (expo(a, abs(n)));
        rs = rs / c;
        return rs;
    }
    else
    {

        if (n % 2 == 0)
        {
            double res = expo(a, n / 2);
            return res * res;
        }
        else
        {
            return a * expo(a, (n - 1));
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        double a;
        long long int n;
        cin >> a >> n;
        cout << a << " " << n << "\n";
        cout << expo(a, n);

        cout << "\n";
    }
}