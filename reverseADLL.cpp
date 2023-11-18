
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution
{
public:
    Node *reverseDLL(Node *head)
    {
        Node *temp;
        while (head)
        {
            temp = head;
            swap(head->prev, head->next);
            head = head->prev;
        }
        return temp;
    }
};