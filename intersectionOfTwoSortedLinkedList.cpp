#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    Node *findIntersection(Node *head1, Node *head2)
    {
        Node *ans = new Node(-1);
        Node *temp = ans;
        while (head1 && head2)
        {
            if (head1->data == head2->data)
            {
                Node *curr = new Node(head1->data);
                temp->next = curr;
                temp = temp->next;
                head1 = head1->next;
                head2 = head2->next;
            }
            else if (head1->data < head2->data)
            {
                head1 = head1->next;
            }
            else
            {
                head2 = head2->next;
            }
        }
        return ans->next;
    }
};