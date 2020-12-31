#include <bits/stdc++.h>
using namespace std;

vector<int>prefix_sum (vector<int> arr, int size)
{

    vector<int> v(size);

    v[0] = arr[0];

    for (int i = 1; i < size; i++)
    {

        v[i] = v[i - 1] + arr[i];
    }

    return v;
}

int solve(int index1, int index2, vector<int> arr, int size)
{
   vector<int> res;

    res = prefix_sum(arr, size);

   

    if (index1 == 0)
    {
        return res[index2];
    }
    else
    {

        return res[index2] - res[index1 - 1];
    }
}

int main()
{

    int t, size, index1, index2, ele;
    cin >> t;
    while (t--)
    {
        cin >> size >> index1 >> index2;

        vector<int> arr;

        for (int i = 0; i < size; i++)
        {

            cin >> ele;
            arr.push_back(ele);
        }

        cout << solve(index1, index2, arr, size);
    }
}