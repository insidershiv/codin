#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> &board, int row, int col, int n){
        // checking the current row:
    
    
        int i,j;
    for( i=0;i<=col;i++){
        if(board[row][i]){
            return false;
        }
    }
    // checking the diagonal on the left upward
    for(int i =row, j=col ; i>=0 && j>=0;i--,j-- ){
        if(board[i][j]){
            return false;
        }
    }    
    // checking left lower diagonal
    for(i=row, j=col;i<=n && j>=0 ; i++,j--){

        if(board[i][j]){
            return false;
       
                  
        }

    }
    return true;


}


bool place(vector<vector< int >> &board, int col, int n ){

    if(col > n){
        return true;
    } 

    for(int i = 0 ;i<=n;i++){

        if(check(board,i,col,n)){
            board[i][col] = 1;
        

            if(place(board, col+1, n)){
                return true;
            }

            board[i][col] = 0;
        
        }

    }
    return false;


}




bool solve(){
    int n =3;
    vector<vector<int>> board{ {0 , 0, 0, 0},
                               {0 , 0, 0, 0},
                               {0 , 0, 0, 0},
                               {0 , 0, 0, 0}  }; 



    if(place(board, 0, 3) == false){

        cout<<"no solution";
        return false;

    }

    else {


    


  
    for(auto itr = board.begin();itr!=board.end();itr++){

            for(int ele:*itr){
                cout<< ele<<"  ";
            }
            cout<<"\n";
    }
    return true;
    
    }



}







int main(){


    solve();

    return 0;




                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                




}