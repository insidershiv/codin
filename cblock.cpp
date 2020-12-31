#include <bits/stdc++.h>
using namespace std ;

int func(int n){
    int n1 =n;
    int rev =0 ;

    while (n1 !=0)
    {
        rev = rev*10 + n1%10;
        n1 = n1/10;
        /* code */
    }

    return rev;
    
}



int main(){
    int n;
    cin >> n;

    cout<< func(n);

}