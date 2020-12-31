#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int count = 1;

int rowstart = 0 ;
int colstart = 0;
int rowend = n;
int colend = n;
vector<vector<int>>arr(n*n);

for(int i = rowstart ; i<rowend ; i++) {


for(int j = colstart; j< colend; j++){


arr[i][j] = count;

count++;






}






}




    return 0;
}