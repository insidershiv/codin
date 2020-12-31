#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int size)
{

    int prev_even_sum = 0, prev_odd_sum = 0, even_sum_global = 0, odd_sum_global = 0;
    int count = 0;
    int even_sum = 0 , odd_sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            even_sum_global = even_sum_global + arr[i];
        else
            odd_sum_global = odd_sum_global + arr[i];
    }

    for (int i = 0; i < size; i++)
    {      even_sum = even_sum_global;
           odd_sum = odd_sum_global ; 
        if (i % 2 == 0)
        {
            

            even_sum = even_sum - prev_even_sum - arr[i];
            odd_sum = odd_sum - prev_odd_sum;

            int temp = 0;

            temp = even_sum;
            even_sum = odd_sum;
            odd_sum = temp;

            even_sum = prev_even_sum + even_sum;
            odd_sum = odd_sum + prev_odd_sum;
            prev_even_sum = prev_even_sum + arr[i];
            if (even_sum == odd_sum)
            {
                count++;
            }
        }

        else
        {
            

            even_sum = even_sum - prev_even_sum;
            odd_sum = odd_sum - prev_odd_sum - arr[i];

            int temp = 0;

            temp = even_sum;
            even_sum = odd_sum;
            odd_sum = temp;

            even_sum = prev_even_sum + even_sum;
            odd_sum = odd_sum + prev_odd_sum;
            prev_odd_sum = prev_odd_sum + arr[i];

            if (even_sum == odd_sum)
            {
                count++;
            }
        }
    }
    return count;
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


        cout<<sol(arr, size);


    }

    return 0;
}