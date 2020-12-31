#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n)
{

    for (int i = n; i > 1; i--)
    {
        if (arr[i] > arr[i - 1])
        {

            sort(arr.begin() + i, arr.end());
            for (int j = i; j <= n; j++)
            {
                if (arr[i - 1] < arr[j])
                {
                    swap(arr[i - 1], arr[j]);
                    return;
                }
            }
            return;
        }
    }
    sort(arr.begin() + 1, arr.end());
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > arr[0])
        {
            swap(arr[i], arr[0]);
            return;
        }
    }
    sort(arr.begin(), arr.end());
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int ct = 1;
    int n;
    cin >> n;
    vector<int> arr;
    vector<vector<int>> arr2;
    vector<int> v3;
    int ele;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    // arr2.push_back(arr);

    int limit = fact(n);

    set<vector<int>>s;

    for (int k = 1; k <= limit; k++)
    {

        solve(arr, n - 1);

        for (int i : arr)
        {
            // cout<< i<<","<<" ";
            v3.push_back(i);
        }


    s.insert(v3);
    v3.clear();

    }



    for (auto itr = s.begin(); itr != s.end(); itr++)
    {

        arr2.push_back(*itr);
    }

    for(auto itr = arr2.begin();itr != arr2.end();itr++){

        for(int e:*itr){
            cout<<e<<"  ";

        }
        cout<<"\n";
    }

    return 0;
}
