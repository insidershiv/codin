#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    int sw = 0;

    for(int i=n;i>=0;i--){

        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sw =1;
            }

           

        }
         if(sw!=1){break;}
    }

}



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++ ){
        cin>>arr[i];
    }

    sort(arr,n);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<"\n";

}