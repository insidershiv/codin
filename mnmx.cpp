#include<bits/stdc++.h>
using namespace std;


int sol(vector<int>arr, int size){

    

    

}

int main() {
    long long int t, size;
    cin>>t;

    while(t--) {
        cin>>size;
        
        vector<long long int> arr;

        for(int i=0;i < size;i++) {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }




        long long int min = *min_element(arr.begin(), arr.end());

        cout<<min*(size-1);
        cout<<"\n";



        


    }
    
}