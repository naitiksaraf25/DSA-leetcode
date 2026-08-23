class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            temp.clear();

            for (int j = 0, k = i; j < m && k < n; j++, k++)
                temp.push_back(mat[k][j]);

            sort(temp.begin(), temp.end());
            
            int index = 0;
            for (int j = 0, k = i; j < m && k < n; k++, j++)
                mat[k][j] = temp[index++];
        }
        for (int c = 1; c < m; c++) {
            temp.clear();

            for (int i = 0, j = c; j < m && i < n; i++, j++)
                temp.push_back(mat[i][j]);

            sort(temp.begin(), temp.end());

            int index = 0;
            for (int i = 0, j = c; j < m && i < n; i++, j++)
                mat[i][j] = temp[index++];
        }
        return mat;
    }
};