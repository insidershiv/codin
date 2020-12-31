#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int size)
{

    int sum = 0;

    vector<int> prefix(size, 0);
    vector<int> suffix(size, 0);

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum"
         << "  " << sum << "\n";

    int req = sum / 3;

    if (sum % 3 != 0)
    {
        // return 0 ;
        cout << "some";
    }
    int local_sum = 0;
    int local_sum_suffix = 0;

    for (int j = 0, i = size - 1; j < size, i >= 0; j++, i--)
    {

        local_sum = local_sum + arr[j];

        if (local_sum == req)
        {
            prefix[j] = 1;
        }

        local_sum_suffix = local_sum_suffix + arr[i];

        if (local_sum_suffix == req)
        {
            suffix[i] = 1;
        }
    }
    cout << "\n";
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

        sol(arr, size);
    }

    return 0;
}