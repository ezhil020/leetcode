class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int rows = matrix.size()-1 ;
       int cols = matrix[0].size()-1;
     for(int i = 0 ; i<=rows;i++)
     {
        for(int j = 0+i ; j<=cols ;j++ )
        {
          swap( matrix [i][j] ,matrix [j][i]);
        } 
     }
     for(int i = 0 ; i <= rows ; i++)
     { 
     reverse(matrix[i].begin(),matrix[i].end());
    }

    }
};