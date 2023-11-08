
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> snakePattern(vector<vector<int>> matrix)
    {
        bool leftToRight = true;
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (leftToRight)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    ans.push_back(matrix[i][j]);
                }
                leftToRight = !leftToRight;
            }
            else
            {
                for (int j = matrix[0].size() - 1; j >= 0; j--)
                {
                    ans.push_back(matrix[i][j]);
                }
                leftToRight = !leftToRight;
            }
        }
        return ans;
    }
};