#include <bits/stdc++.h>
using namespace std;
int max_number = INT_MIN;
int sol(vector<int> arr, int size)
{
    if (size < 0)
    {
        return max_number;
    }
    else
    {

        if (arr[size] > max_number)
        {
            max_number = arr[size];
        }

        return sol(arr, size - 1);
    }
}
int main()
{

    vector<int> arr;
    int t, size;
    cin >> t;
    while (t--)
    {

        cin >> size;

        for (int i = 0; i < size; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
    }
    cout << sol(arr, size);

    return 0;
}