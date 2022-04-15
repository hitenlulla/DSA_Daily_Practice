// https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();                        
        // SC - O(n*n) - soln
        /*
        vector<vector<int>> ans(n, vector<int> (n , 0)); 
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                ans[j][n - 1 - i] = matrix[i][j];                
            }
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                matrix[i][j] = ans[i][j];
        */
        
        //SC - O(1) soln
        // Transpose the Matrix
        for(int i = 0; i < n; i++)
            for(int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]); 
        
        // Reverse Each row of matrix
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        } 
    }
};