#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    void Dfs(vector<int> Adj[], vector<int> &vis, int i)
    {
        vis[i] = 1;
        for (auto x : Adj[i])
        {
            if (!vis[x])
            {
                Dfs(Adj, vis, x);
            }
        }
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        vector<int> Adj[N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i != j && graph[i][j] == 1)
                {
                    Adj[i].push_back(j);
                }
            }
        }
        vector<vector<int>> ans;
        for (int i = 0; i < N; i++)
        {
            vector<int> vis(N, 0);
            Dfs(Adj, vis, i);
            ans.push_back(vis);
        }
        return ans;
    }
};