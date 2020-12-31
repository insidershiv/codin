#include<bits/stdc++.h>
using namespace std;
void sol(vector< int > &arr, int size, int d){
d = d % size ;
vector<int> temp(d);



for(int i = 0 ;i < d; i++) {

    temp[i] = arr[i];

}




int j =0 ;
for(int i = d ; i<size ; i++) {
    
    arr[j++] = arr[i];
}

int k = 0;
for(int i = j ; i<size; i++) {
    arr[i] = temp[k++];
}

for(int i =0 ; i<size; i++) {
    cout<<arr[i]<<" ";
}
             
             
}
int main() {
      
vector <int> arr ;
int t, size, d ;
cin>>t ;
while(t--)  {
     
cin>>size ;
cin>>d;
         
for(int i = 0 ; i<size; i++){
int ele ;
cin>>ele ;
arr.push_back(ele) ;
}

sol(arr, size, d);


   
}
     
    
return 0;
}