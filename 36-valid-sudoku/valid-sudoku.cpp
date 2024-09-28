class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      bool rows[9][9]= {false};
      bool cols[9][9]={false};
      bool boxes[9][9]={false};
      int element,boxindex;
      for(int i = 0;i<9;i++)
      {
        for(int j = 0;j<9;j++)
        {
            if(board[i][j]!='.'){
            boxindex = (i/3)*3+j/3;
            element = board[i][j] - '1';
            if(rows[i][element]||cols[j][element]||boxes[boxindex][element])
            {
                return false;
            }
            else{
               rows[i][element]=true;
               cols[j][element]=true;
               boxes[boxindex][element] = true; 
            }
         
        }
      }}
      return true;
       
    }
};