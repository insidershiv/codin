#include <bits/stdc++.h>
using namespace std;

int solve(int size, vector<int> arr, int k)
{
    unordered_map<int, int> m;
    unordered_map<int, int> m2;
    int count = 0;
    int var = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        if (m.find(arr[i]) == m.end())
        {
            m[arr[i]] = 1;
            if (m2.find(arr[i]) == m2.end())
            {
                m2[arr[i]] = ++count;
            }
        }
        else
        {
            m[arr[i]]++;
        }
    }
    int random = -1;

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {

        int key = itr->first;
        int value = itr->second;
        if (value == k)
        {
            if (m2[key] < var)
            {
                var = m2[key];
                random = key;
            }
        }
    }


return random;
}


int main()
{

    int t, size, k;
    cin >> t;
    while (t--)
    {
        cin >> size >> k;

        vector<int> arr;
        int ele;
        for (int i = 0; i < size; i++)
        {
            cin >> ele;
            arr.push_back(ele);
        }
        int item = solve(size, arr, k);
        cout << item << "\n";
    }
}