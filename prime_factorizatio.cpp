#include <bits/stdc++.h>
using namespace std;

void factor(int n)
{
    unordered_map<int, int> m;
    vector<int> v;
    int d = 2;
   

    while (n > 1 && d * d <= n)
    {

        int k = 0;
        while (n % d == 0)
        {
            n = n / d;
            k++;
        }
        if (k > 0)
        {


            m[d] = k;
        }
        d++;
    }
    if (n > 1)
    {

        m[n] = 1;
    }

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {

        int key = itr->first;
        int value = itr->second;

        int i = 1;
        // while (i <= value)
        // {
            cout <<key<<" "<<value<<" ";
        // }

        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    factor(n);
    return 0;
}