class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            temp.clear();

            for (int j = 0, k = i; j < m && k < n; j++, k++)
                temp.push_back(grid[k][j]);

            sort(temp.rbegin(), temp.rend());

            int index = 0;
            for (int j = 0, k = i; j < m && k < n; k++, j++)
                grid[k][j] = temp[index++];
        }
        for (int c = 1; c < m; c++) {
            temp.clear();

            for (int i = 0, j = c; j < m && i < n; i++, j++)
                temp.push_back(grid[i][j]);

            sort(temp.begin(), temp.end());

            int index = 0;
            for (int i = 0, j = c; j < m && i < n; i++, j++)
                grid[i][j] = temp[index++];
        }
        return grid;
    }
};