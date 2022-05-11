class Solution {
public:
    bool row(vector<vector<char>> &board,int r,int c){
        for(int i=c+1;i<9;i++){
            if(board[r][i]==board[r][c])
                return false;
        }
        return true;     
    }
    
    bool column(vector<vector<char>> &board,int r,int c){
        for(int i=r+1;i<9;i++){
            if(board[i][c]==board[r][c])
                return false;
        }
        return true;
    }
    
    bool dabba(vector<vector<char>> &board,int r,int c){
        int rstart=(r/3)*3;
        int cstart=(c/3)*3;
        
        for(int i=rstart;i<rstart+3;i++){
            for(int j=cstart;j<cstart+3;j++){
                if(i!=r && j!=c){
                    if(board[i][j]==board[r][c])
                        return false;
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(row(board,i,j) && column(board,i,j) && dabba(board,i,j)){
                        continue;
                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};