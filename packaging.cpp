#include <bits/stdc++.h>
using namespace std;

void sol(int n)
{
    int i, j;
    int mode = 0;
    for (i = n - 1 ,  j = 2 ; i >= 2; i--, j++)
    {

        if (n % i > mode)
        {

            mode = n%i;


        }else {
            break;
        }
    }
    cout<< n - mode <<"\n";
}
int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n;

        sol(n);
    }

    return 0;
}