#include<bits/stdc++.h>
using namespace std;
int main(){

int n ;
cin>>n;

float count = 0 ;


for(int i = n; i>=1; i--) {



count  = count + log10(i);




}


cout<<floor(count) +1;
    return 0 ;

}