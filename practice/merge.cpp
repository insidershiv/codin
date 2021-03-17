#include <bits/stdc++.h>
using namespace std;



void merge(vector<int> &arr, int p,int q, int r, int s)
{

    
    int i = p;
    int j = r;
    int k = 0;
    vector<int> res(s-p+1);
    while(i <= q && j <= s){
        if(arr[i] < arr[j]){
            res[k] = arr[i];
            i++;
        } else{
            res[k] = arr[j];
            j++;
        }   
        k++;
    }

    while(i<=q){
        res[k] = arr[i];
        i++;
        k++;
    }

    while(j<=s){
        res[k] = arr[j];
        j++;
        k++;
    }

    for(int i = p,k=0; i <=s; i++,k++){
        arr[i] = res[k];
    }

  
}

void mergesort(vector<int> &arr, int p, int q)
{


    int mid = p + (q-p)/2;

    if(p>=q){
        return;
    }
   
    //cout<<mid <<"  "<< p <<"  "<<q<<" ";

        mergesort(arr, p, mid);
        mergesort(arr, mid + 1, q);
        merge(arr,  p, mid, mid+1,q);

    
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

    //cout<<size;
    mergesort(arr, 0 , size-1);

    cout<<"\n";

    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}