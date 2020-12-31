#include <bits/stdc++.h>

using namespace std;

// prefix sum array

vector<int> prefix_sum(vector<int> arr, int size)
{

    vector<int> v(size);

    v[0] = arr[0];

    for (int i = 1; i < size; i++)
    {

        v[i] = v[i - 1] + arr[i];
    }

    return v;
}

int solve(vector<int> arr, int n, int k)
{

    int count = 0;
    vector<int> temp;

    temp = prefix_sum(arr, n);

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            if (temp[i] - temp[j] == k)
            {

                count++;
            }
        }
    }

    return count;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n;
        cin >> k;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {

            int ele;

            cin >> ele;
            arr.push_back(ele);
        }

       cout<< solve(arr, n, k);
    }
}