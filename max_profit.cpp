#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int size)
{
    int min = 0;
    int max = 0;
    int sol1 =0, sol2 =0;
    int profit =0;
    vector<int> profit_list;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < arr[i+1]) {
            min = arr[i];
           

            // for(int j = i+1 ; j<size; j++) {

                int maxx = *max_element(arr.begin()+i, arr.end());
                
                  //  max = arr[j];

                    cout<< "min ::"<<min << "     " <<"max::: "<<"  "<< max<< "   maxx:::  " << maxx <<"\n";

                //    cout<<profit<<""<<"\n";
                    profit = (maxx - min);

                    profit_list.push_back(profit);
                     break;
                
            // }


          
             


        }
    }


      for(int item : profit_list) {
                cout<< item <<"   ";
            }
            cout<<"\n";


             sol1 =    distance(profit_list.begin(), max_element(profit_list.begin(), profit_list.end()));
            // cout<<sol1;
            profit = profit_list[sol1];
            // profit_list.erase(sol1);
            profit = profit + *max_element(profit_list.begin(), profit_list.end());







    cout<< profit;
}
int main()
{

    vector<int> arr;
    int t, size;
    cin >> t;
    while (t--)
    {

        cin >> size;

        for (int i = 0; i < size; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
    }

    sol(arr, size);

    return 0;
}