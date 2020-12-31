#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int size)
{

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int max4 = INT_MIN;

    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int min3 = INT_MAX;
    int min4 = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        max1 = max(max1, arr[i] + i);
        max2 = max(max2, -arr[i] + i);
        max3 = max(max3, arr[i] - i);
        max4 = max(max4, -arr[i] - i);

        min1 = min(min1, arr[i] + i);
        min2 = min(min2, -arr[i] + i);
        min3 = min(min3, arr[i] - i);
        min4 = min(min4, -arr[i] - i);
    }


  

    int res_max1 = ((max1 - min1), (max2 - min2));

    int res_max2 = max((max3 - min3), (max4 - min4));

    return max(res_max1, res_max2);
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

        cout << sol(arr, size);
    }

    return 0;
}