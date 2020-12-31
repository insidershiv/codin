#include<bits/stdc++.h>
using namespace std;
int sol(vector< int > arr, int size){

map<int, int>m;
vector<int>element;


for(auto x:arr){
    m[x]++;
}

for(auto x:m){
    element.push_back(x.first);
}

int n = element.size();
 for(int i= n-2;i>=0;i--){
         if(element[i] == m[element[i+1]]) 
            return 1;
        m[ element[i]] += m[ element[i+1]];
    }
    if(element[n-1]==0){
        return 1;
    }
    return -1;
             
             
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


cout<<sol(arr, size);


   
}
     
    
return 0;
}