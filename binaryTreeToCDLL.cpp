#include <iostream>
#include <vector>
using namespace std;

class Solution
{
#define append push_back
    void dfs(Node *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        dfs(root->left, v);
        v.append(root->data);
        dfs(root->right, v);
    }
    Node *bTreeToCList(Node *root)
    {
        vector<int> v;
        dfs(root, v);
        Node *ptr = newNode(v[0]);
        ptr->left = ptr, ptr->right = ptr;
        Node *start = ptr;
        for (int i = 1; i < v.size(); i++)
        {
            Node *next = newNode(v[i]);
            next->left = ptr;
            ptr->right = next;
            next->right = next;
            ptr = next;
        }
        start->left = ptr;
        ptr->right = start;
        return start;
    }
};

Done
