#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if (root == NULL)
        {
            return true;
        }
        int left = solve(root->left);
        int right = solve(root->right);

        if (abs(left - right) > 1 or !isBalanced(root->left) or !isBalanced(root->right))
        {
            return false;
        }
        return true;
    }
    int solve(Node *root)
    {
        if (root == NULL)
            return 0;
        return max(1 + solve(root->right), 1 + solve(root->left));
    }
};