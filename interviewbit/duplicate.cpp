#include<bits/stdc++.h>
using namespace std;

int main() {
      
int t, size ;
cin>>t ;
while(t--)  {
     
cin>>size ;

vector<int>arr;
unordered_map<int, int>m;


         
for(int i = 0 ; i<size; i++){
int ele ;

cin>>ele;


arr.push_back(ele);

} 


int index = arr[0];
cout<<arr[0];

while(arr[index] !=index){
    int temp = arr[index];
    arr[index] = index;
    index = temp;
}

cout<<index;




}
  
    
return -1;
}