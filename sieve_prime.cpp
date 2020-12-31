#include<bits/stdc++.h>
using namespace std;

// prime numbers between the given number

void primeNumbers(int n ){

    vector<bool>v(n+1);
    for(int i=2;i<=n;i++){
        v[i] = true;
    }

    for(int i=2;i<=n/2;i++){
        if(v[i]){
            for(int j=2*i;j<=n;j = j+i){
                v[j] = false;
            }
        }
    }

   for(int i = 2; i<=n+1;i++){
       if(v[i]){
           cout<<i<<" ";
       }
   }


}



int main(){

    int n;
    cin>>n;
    primeNumbers(n);
    return 0;

}