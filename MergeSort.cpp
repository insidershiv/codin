#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr, int start, int p, int q, int n, int size)
{

    vector<int> sorted_array(size);
     //cout<<"size"<<" "<<size<<"   " <<"p   "<<p<<"  "<<"q  " <<q<<"  "<<"n  "<<n<<"  "<<"start"<<"  " <<start<<"\n";
    int k = 0;
    int i = start, j = q;
    // cout<<"jjj  "<<j<<"q  "<<q<<"\n";
    while (i <= p && q <= n && i <= n && j <= n)
    {
        // cout<<"jjjj   "<<j<<"\n";

        if (arr[i] < arr[j])
        {

            sorted_array[k] = arr[i];
           //  cout<<"sorted_array"<<"   "<<sorted_array[k]<<"\n";
            //cout<<"i  "<<i<<"\n";
            i++;
          
            k++;
            
        }
        else
        {
           // cout<<"j   "<<arr[j]<<"\n";
            sorted_array[k] = arr[j];
            //cout<<"i  "<<i<<"\n";
             //cout<<"sorted_array"<<"   "<<sorted_array[k]<<"\n";
            j++;
            k++;
        }
    }

    // cout<<"\n";
    // cout<<i<<j<<p<<q<<"\n";

    while (i <= p || j <= n)
    {
        if (i > p)
        {
            sorted_array[k] = arr[j];
              //cout<<"sorted_array"<<"   "<<sorted_array[k]<<"\n";
            j++;
            k++;
            // cout<<sorted_array[k];
        }

        else
        {
            sorted_array[k] = arr[i];
             //cout<<"sorted_array"<<"   "<<sorted_array[k]<<"\n";
            i++;
            k++;
        }
    }

    int l = 0;
    while (start <= n)
    {
        arr[start] = sorted_array[l];
        start++;
        l++;
    }

    for(int m =  0 ;m <size; m++){
         cout<<arr[m]<<" ";
    }
    cout<<"\n";
}


void mergesort(vector<int> &arr, int left, int right)
{

    int mid = left + (right - left) / 2;
    int p = mid;
    int q = mid + 1;
    int size = right - left + 1;
    int n = right;

    if (left == right)
    {
        return;
    }
    else
    {
        mergesort(arr, left, p);
        mergesort(arr, q, right);

        merge(arr, left, p, q, right, size);
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

        int left = 0;
        int right = size - 1;

        int start = 0;
        int mid = (size - 1) / 2;
        int p = mid;
        int q = mid + 1;

        int n = size - 1;

        mergesort(arr, left, right);

        for(int i =0 ; i< size; i++){
            cout<<arr[i]<<" ";
        }
     }
    return 0;
}
