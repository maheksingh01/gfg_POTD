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
    bool isIdentical(Node *r1, Node *r2)
    {
        // Your Code here
        //  base case
        if (r1 == NULL && r2 == NULL)
            return true;
        if ((r1 == NULL and r2 != NULL) || (r1 != NULL and r2 == NULL))
            return false;

        // if data are not same return false
        if (r1->data != r2->data)
            return false;

        // check for both sides Left and Right
        bool l = isIdentical(r1->left, r2->left);
        bool r = isIdentical(r1->right, r2->right);

        // if Left(l) and Right(r) both return true then return true
        if (l && r)
            return true;

        // othere wise return false
        return false;
    }
};