
#include <iostream>
#include <unordered_map>
using namespace std;

// node

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    int count_paths = 0;

    void dfs(Node *root, int target, unordered_map<int, int> &path_sum, int curr_sum)
    {
        if (!root)
            return;
        curr_sum += root->data;
        if (curr_sum == target)
            count_paths++;

        if (path_sum.find(curr_sum - target) != path_sum.end())
            count_paths += path_sum[curr_sum - target];

        path_sum[curr_sum]++;
        dfs(root->left, target, path_sum, curr_sum);
        dfs(root->right, target, path_sum, curr_sum);

        path_sum[curr_sum]--;
    }

    int sumK(Node *root, int k)
    {
        unordered_map<int, int> path_sum;
        int curr_sum = 0;
        dfs(root, k, path_sum, curr_sum);
        return count_paths;
    }
};