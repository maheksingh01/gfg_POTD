#include <iostream>
using namespace std;

class Solution
{
    std::unordered_set<std::string> visited;
    std::string startingNode(n - 1, '0');
    std::vector<int> path;
    dfs(k, startingNode, visited, path);

    std::stringstream result;
    int totalPaths = pow(k, n);
    for (int i = 0; i < totalPaths; i++)
    {
        result << path[i];
    }
    result << startingNode;
    return result.str();
}

void
dfs(int k, std::string current, std::unordered_set<std::string> &visited, std::vector<int> &path)
{
    for (int i = 0; i < k; i++)
    {
        std::string next = current + static_cast<char>('0' + i);
        if (visited.find(next) == visited.end())
        {
            visited.insert(next);
            dfs(k, next.substr(1), visited, path);
            path.push_back(i);
        }
    }
};