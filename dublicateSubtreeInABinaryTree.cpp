#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};

class Solution
{
    string solve(Node *root, bool &result, unordered_map<string, int> &mp)
    {
        if (!root || result)
        {
            return "N";
        }
        else if (!(root->left) && !(root->right))
            return to_string(root->data);

        string s = to_string(root->data) + "," + solve(root->left, result, mp) + "," + solve(root->right, result, mp);

        if (mp[s] == 1)
        {
            result = 1;
        }
        mp[s]++;
        return s;
    }
    int dupSub(Node *root)
    {
        bool result = 0;
        unordered_map<string, int> mp;
        solve(root, result, mp);
        return result;
    }
};