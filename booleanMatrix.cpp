class solution
{
public:
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        // code here
        int n = matrix.size();
        int m = matrix[0].size();
        map<int, int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 1)
                {
                    v1[i]++;
                    v2[j]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v1.find(i) != v1.end() or v2.find(j) != v2.end())
                {

                    matrix[i][j] = 1;
                }
            }
        }
    }
}