#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int solve(lli a, lli b)
{
   
   if(b==1) {
       return a%10;
   }

    if(b%2==0) {


        lli d = (solve(a,b/2)) % 10;
        return (d*d)%10;
        
    }
    else {

        b = b-1;
        lli k = (solve(a,b/2))%10;
        k = (k*k)%10;
        k = (a*k)%10;
        return k;


    }





}

int main()
{

    int t;

    cin >> t;
    while (t--)
    {
       lli a, b;
        cin >> a >> b;
     

        lli p = solve(a, b);
        cout<<p<<"\n";
    }
}