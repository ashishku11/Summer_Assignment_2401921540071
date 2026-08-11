class Solution {
public:
    void queens(int col,vector<string> &ds,vector<vector<string>> &ans,vector<int> &leftr,vector<int> &upperDiagonal,vector<int> &lowerDiagonal,int n){
        if(col==n){
            ans.push_back(ds);
            return;
        }
        for(int row = 0;row<n;row++){
            if(leftr[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n-1 + col - row] == 0){
                
                ds[row][col] = 'Q';
                leftr[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1 + col - row] = 1;
                queens(col+1,ds,ans,leftr,upperDiagonal,lowerDiagonal,n);
                ds[row][col] = '.';
                leftr[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1 + col - row] = 0;

            }
        }

    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            ds[i]=s;
        }
        vector<int> leftr(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        queens(0,ds,ans,leftr,upperDiagonal,lowerDiagonal,n);
        return ans;
          

        
    }
};