#include<bits/stdc++.h>
using namespace std;









string convertToString(vector<int>a, int size) 
{ 
    int i; 
    string s = ""; 
   
  
    for (i = 0; i < size; i++) { 
        char ch = a[i];
        // to_string(ch);
        // cout<<ele<<"  ";
        s = s + to_string(ch); 
    } 
    return s; 
} 





int main() {
      

int n ;

cin>>n;
 
float count = 0 ;

for(int i = n ; i>=1 ; i--) {
    count = count + log10(i);
}

count = floor(count) + 1 ;

vector<int> arr(count, 0);



int size = count-1;

arr[count-1] = 1 ;
int pos = count-1 ;

for(int i = 2; i<= n ; i++) {




pos = size;

int carry = 0 ;

for(int j = size; j>=pos && pos >=0; j--) {



    int number  = i  *  arr[j];

    number = number + carry;

    int digit = number % 10 ;
    number = number/10;
    carry = number ;

    arr[pos] = digit;

pos--;



}


}



string s = convertToString(arr, count);

cout<<s;








// for(int k =0 ; k<count; k++) {
//     cout<<arr[k]<<" ";
// }











return 0;
}