#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, vector<int> arr)
{

 make_heap(arr.begin(), arr.end());
 for(int i=1;i<=k;i++){
     cout<<arr.front()<<" ";
     
     pop_heap(arr.begin(),arr.end());

    
     
 }

 cout<<"\n";
 for(int ele:arr){
     cout<<ele<<" ";
 }
     
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,k;
        cin >> n>>k;
        vector<int> arr;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            arr.push_back(ele);
        }

       solve(n,k,arr);
       
    
    }
}