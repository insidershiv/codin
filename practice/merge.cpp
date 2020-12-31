#include <bits/stdc++.h>
using namespace std;



void merge(vector<int> &arr, int p, int q, int end)
{

    vector<int> result;
    int k = 0;
    int i = 0 , j= 0 ;
    while (p < end && j <end)
    {

        while( i <= q && j <=end){

            


        if (arr[i] < arr[j])
        {
            result.push_back(arr[i]);
            i++;
        }
        else
        {
            result.push_back(arr[j]);
            j++;
        }

        }
        if(i >q && j < end){
            result.push_back(arr[j]);
            j++;
        }
        if(j < end && i <q){
            result.push_back(arr[i]);
            i++;
        }


    }


  
}

void mergesort(vector<int> &arr, int p, int q)
{

    int mid = p + (q-p)/2;

    while (p < q)
    {

        mergesort(arr, p, mid);
        mergesort(arr, mid + 1, q);
        merge(arr, p, mid, q);

    }
}

int main()
{

    vector<int> arr;
    int t, size;

    cin >> size;

    for(int i = 0 ; i<size; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }


    mergesort(arr, 0 , size);



    return 0;
}