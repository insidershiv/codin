#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int size)
{

    if (size <= 1)
    {
        return 0;
    }

    int m = *max_element(arr.begin(), arr.end());

    map<int, int> freq;
    int max_element = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int ele = arr[i];
        freq[ele]++;
    }

    // int element1 = -1;
    // int element2 = -1;

    // for (int i = 0; i <= max; i++)
    // {
    //     cout << freq[i] << "  ";
    // }
    // cout << "\n";

    // for (int i = 0; i <= max; i++)
    // {

    //     if (freq[i] == 0)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         if (element1 == -1)
    //         {
    //             element1 = i;
    //         }
    //         else
    //         {
    //             if (element2 == -1)
    //             {
    //                 element2 = i;
    //                 cout<<"element1"<<"   "<<element1<<"    "<<"element2    "<<element2<<"\n";
    //                 if (max_element < (element2 - element1))
    //                 {
    //                     max_element = element2 - element1;
    //                 }
    //                 element1 = element2;
    //                 element2 = -1;
    //             }
    //         }
    //     }
    // }


    int res = 0;
    int prev = INT_MAX;



    for (auto &it : freq)
    {
        if((it.second) > 0 ) {
            res = max(res, it.first - prev);

            prev = it.first;    

        }
    }


    for(auto &it : freq) {
        cout<< it.first <<"  "<< it.second<<"\n";
    }




    // for (int i = 0; i <= m; i++)
    // {
    //     if (freq[i] > 0)
    //     {
    //         res = max(res, i - prev);
    //         prev = i;
    //     }
    // }

    return res;
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