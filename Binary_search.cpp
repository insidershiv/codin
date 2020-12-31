#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int start, int n, int k){
    int mid = (start+n)/2;
    if(start>n){return -1;}
    if(arr[mid]==k){
        return mid;
    }else {
        if(arr[mid]<k){
            return solve(arr, mid+1, n ,k);
        }
        else {return solve(arr,start, mid-1,k);}
    }

    return -1;
}


int main() {

    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int start = 0;
    cout<<solve(arr,start,n-1,k)<<"\n";

}