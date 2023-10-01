class Solution
{
public:
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
    {
        vector<int> ans;
        for (int j = 0; j < m; j++)
            ans.push_back(matrix[0][j]);
        for (int i = 1; i + 1 < n; i++)
            ans.push_back(matrix[i][m - 1]);

        for (int j = m - 1; n > 1 && j >= 0; j--)
            ans.push_back(matrix[n - 1][j]);
        for (int i = n - 2; m > 1 && i > 0; i--)
            ans.push_back(matrix[i][0]);

        return ans;
    }
};