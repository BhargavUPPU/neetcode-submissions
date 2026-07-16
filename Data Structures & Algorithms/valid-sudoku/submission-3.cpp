class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row[9];
        unordered_set<int> col[9];
        unordered_set<int> boxindex[9];
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
            if(board[r][c]=='.')
            { continue;
            }
             int val=board[r][c];
             if(row[r].find(val)!=row[r].end()){
                return false;
             }else{
                row[r].insert(val);
             }                

              if(col[c].find(val)!=col[c].end()){
                return false;
              }else{
                col[c].insert(val);
              }
              int boxIndex=(r/3)*3+c/3;
              if(boxindex[boxIndex].find(val)!=boxindex[boxIndex].end()){
                return false;
              }else{
                boxindex[boxIndex].insert(val);
              }

            }
        }
        return true;
    }
};
