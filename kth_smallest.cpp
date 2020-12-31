#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{

    int pivot = arr[end];

    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if(arr[j]<pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[end]);
    return i+1;
}


int ksmallest(vector<int> &arr, int start, int end, int k ){

   // cout<< start<<" "<<end;
   if(k < 1) {
       return -1;
   }

if (start >= end) {
    if(k==start+1){
        return arr[k-1];
    }else {
        return -1;
    }
}



int pos = partition(arr, start, end);
// //cout<<pos;

int result;
//     /* code */

if(pos + 1 == k ) {

 result = pos;
   return arr[pos];
   
}
else if(pos + 1 > k){
  return  ksmallest(arr, start, pos-1, k);
}else {
   return ksmallest(arr, pos+1, end, k);

}



}




int main()
{

    vector<int> arr;
    int t, size, k;
    cin >> t;
    while (t--)
    {

        cin >> size;
        cin>>k;


        for (int i = 0; i < size; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        int start = 0;
        int end = size -1;


      // int result =  ksmallest(arr, start, end, k);

       //cout<<result;
       cout<<start<<" dfdfd" <<end<<"\n";
        cout<< ksmallest(arr, start, end, k);

    }

    return 0;
}