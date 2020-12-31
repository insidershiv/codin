#include <bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int> arr, int size)
{

    vector<int> prefix;
    int max = 0;
    int global_start = -1;
    int global_end = -1;
    int count = 0;

    int start = 0;
    int end = start -1 ;

    for (int i = 0; i < size; i++)
    {
        end++;
        if ((arr[i] + 1) % 2 == 1)
        {

            count++;

        }

       if ((arr[i] + 1) % 2 == 0)
        {

            count--;
            if(count < 0) {
                count = 0 ;
            start = end+1 ;
            end = start - 1;

        }
            continue;

        }


        

        if(max < count) {
            max = count ;
            global_start = start ;
           
            global_end = end ;
            continue;

        }




          


        
        }
    
    cout<<global_start << "     "<<global_end;  

    if(global_start == -1) {

        return prefix;

    }
    
    global_start++;
    global_end++;
    prefix.push_back(global_start);
    prefix.push_back(global_end);

    return prefix;
    
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
     vector<int> result =   sol(arr,size);

cout<<"\n";
     for(int i = 0; i< result.size() ; i++) {
         cout<<result[i]<<"  " ;

     }

    }

    return 0;
}