// https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows_with_zero;
        unordered_set<int> cols_with_zero;
        
        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows_with_zero.insert(i);
                    cols_with_zero.insert(j);
                }
            }
        }
        
        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[0].size(); j++) {
                if (matrix[i][j] != 0) {
                    if (rows_with_zero.find(i) != rows_with_zero.end()) {
                        matrix[i][j] = 0;
                    }
                    if (cols_with_zero.find(j) != cols_with_zero.end()) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        return;
    }
};