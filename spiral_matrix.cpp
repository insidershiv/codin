#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int size)
{
}
int main()
{

    int t, a;
    cin >> t;
    while (t--)
    {

        cin >> a;
        int count = 1;
        int row_start =0, col_start = 0;
        int row_count = 0, col_count = 0;
        int row_limit = a-1, col_limit = a-1;
        int col_end = col_limit;
        int row_end = row_limit;

        vector<vector<int>> vec(a, vector<int>(a));


        while (row_count < a && col_count <a && count<= a*a)
        {
            int i ;
            for(i = col_count; i <= col_end;i++) {
                vec[row_count][i] = count ++;
              
            }
           
            col_count = i -1;
            row_count++;

            for(i = row_count; i<=row_end; i++){
                vec[i][col_count] = count++;
                
            }
            row_count = i-1;
            col_count--;
            col_end--;
            row_end--;

            for(i = col_count ; i>= col_start ;i --) {
                vec[row_count][i] = count++;
            }
            col_count = i + 1;

            row_count--;
            col_start++;
            row_start++;

            for(i = row_count ; i>=row_start ;i --) {
                vec[i][col_count] = count++;
            }
            col_count++;
            row_count = i+1;
            



        }

cout<<"\n\n\n";

        for(int i =0 ;i<a ; i++) {
            for(int j =0 ; j<a;j++) {
                cout<<vec[i][j]<<" ";
            }
            cout<<"\n";
        }
        





    }
    return 0;
}