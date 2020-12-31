#include<bits/stdc++.h>
using namespace std;
int main() {
      
vector <int> arr ;
int t, size ;
cin>>t ;
while(t--)  {
     
cin>>size ;

if(size<2) {
    return -1;
}
         
for(int i = 0 ; i<size; i++){
int ele ;
cin>>ele ;
arr.push_back(ele) ;
}

int slowptr = 0 , fastptr = 0 ;


while(true) {

 slowptr = arr[slowptr];
 fastptr = arr[arr[fastptr]];
 if(slowptr == fastptr){
 
     break;
 }

}

slowptr = 0;


while(true){
    slowptr = arr[slowptr];
    fastptr = arr[fastptr];
    if(slowptr == fastptr)
        break;
}

cout<<slowptr<<"\n";




   
}
     
    
return 0;
}