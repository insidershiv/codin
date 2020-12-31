#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int d, int size)
{
    int temp;

    for (int i = 0; i < d; i++)
    {
        temp = arr[0];
        for (int j = 0; j < size; j++)
        {
            
            arr[j] = arr[j+1];
        }
        arr[size-1] = temp;
    }
}

int main()
{

    vector<int> arr;

    int t, size, d;

    cin >> t;

    while (t--)
    {

        cin >> size;
        cin >> d;
        for (int i = 0; i < size; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        
        for(int j=0; j<size; j++) {
            cout<<arr[j]<<" ";
        }
        cout<<"\n";

        rotate(arr, d, size);


        for(int i=0;i<size;i++) {
            cout<<arr[i]<<" ";
        }
    }
}