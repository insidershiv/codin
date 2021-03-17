#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int size)
{
    cout << "hi";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
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
        sol(arr, size);
    }

    return 0;
}