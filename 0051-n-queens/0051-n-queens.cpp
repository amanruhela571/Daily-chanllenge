class Solution {
public:

    void solve(int col, auto& board, auto& ans, auto& leftrow, auto& LUD, auto& LLD, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++){
            // if(issafe(r,col,board,n))    // this we can check when we are using while loop for condition check
            if(leftrow[r]==0 &&
               LLD[r+col]==0 &&
               LUD[n-1 + col-r]==0 )
               {
                
                board[r][col]='Q';
                leftrow[r]=1;
                LLD[r+col]=1;
                LUD[n-1 + col-r]=1;

                solve(col+1,board,ans,leftrow,LUD,LLD,n);

                board[r][col]='.';
                leftrow[r]=0;
                LLD[r+col]=0;
                LUD[n-1 + col-r]=0;
               
               }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        // we are using the hash concept for checking the conditions and ( other approach is using while loop)

        
        vector<vector< string >> ans;
        vector<string> board(n);        // need to initialize the vector
        string s(n,'.');

        for(int i=0;i<n;i++){
            board[i]=s;
        }


        vector<int> leftrow(n,0);
        vector<int> leftupperdiagonal(2*n-1,0);
        vector<int> leftlowerdiagonal(2*n-1,0);

        solve(0,board,ans,leftrow,leftupperdiagonal,leftlowerdiagonal,n);  
        //   ( col, board, ans, left row, L upper diagaonel, L lower diagonal, N );

        return ans;

    }
};