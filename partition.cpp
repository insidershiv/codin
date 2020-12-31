#include<bits/stdc++.h>
using namespace std;
int partition(vector< int > &arr, int start, int end){

int pivot = arr[end];
int i = start -1;

for(int j = start; j< end; j++) {
    if(arr[j]< pivot) {
        i++;
        swap(arr[j], arr[i]);

    }
}
swap(arr[i+1], arr[end]);
return (i+1);

             
             
}



void quicksort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int pos = partition(arr, start, end);

        quicksort(arr, start, pos - 1);
        quicksort(arr, pos+1, end);

    }
}


int main() {
      
vector <int> arr ;
int t, size ;
cin>>t ;
while(t--)  {
     
cin>>size ;
         
for(int i = 0 ; i<size; i++){
int ele ;
cin>>ele ;
arr.push_back(ele) ;
}

int start = 0;
int end = size-1;

quicksort(arr, start, end);

for (int i = 0; i < size; i++)
{
    /* code */
    cout<<arr[i]<<" ";
}






   
}
     
    
return 0;
}