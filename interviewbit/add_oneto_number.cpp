#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int size)
{
    vector<int>a;
    int carry = 1 ;

    int  i = size-1;

        while (i >= 0)
        {
            if(arr[i]+carry ==10){
                a.push_back(0);
                carry =1 ;
            }else {
                a.push_back(arr[i] + carry);
                carry = 0;
            }
            i--;
        }
        
        if(carry==1){
            a.push_back(carry);
        }
        vector<int>result;

        int n = a.size()-1;
      

        for(int j = n ; j>=0; j--){
            if(a[n] == 0){
            n--;
        }else {
            break;
        }
        }  
        
        for(int i = n ; i>=0; i--) {
            result.push_back(a[i]);
        }
        
        for(int k =0 ; k <result.size();k++) {
            cout<<result[k]<<"  ";
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

        sol(arr, size);
    }

    return 0;
}