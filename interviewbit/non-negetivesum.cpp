#include<bits/stdc++.h>
using namespace std;

void sol(vector< int > arr, int size){

    long long int global_sum = INT_MIN, global_start = 0 , global_end = 0 ;

    int start = 0 , end = -1 ;

    long long int sum = 0;

    for(int i = 0 ;i<size; i++) {

        if(arr[i]< 0 ) {
            start = i+1;
            end = start - 1 ;
            sum = 0 ; 

        }else {
            sum  = sum + arr[i];
            end++;
            if(global_sum < sum) {
                global_sum = sum ;
                global_start = start;
                global_end = end ;

            }

            else if(global_sum ==sum) {
                int count1 = global_end - global_start + 1;
                int count2 = end - start +1;
                if(count1<count2) {
                    global_start = start;
                    global_end = end ;

                }

                if(count1 == count2) {
                    if(global_start > start) {
                        global_start = start;
                        global_end = end ;

                    }
                }
            }
        }
    }


cout<<global_start<<"  " << global_end ;
             
             
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

 sol(arr, size);
   
}
     
    
return 0;
}