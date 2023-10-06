#include <vector>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}
    *head;

class Solution
{
public:
    Node *pairWiseSwap(struct Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *temp = new Node(0);
        temp->next = head;
        Node *prev = temp;
        Node *curr = head;
        while (curr != NULL && curr->next != NULL)
        {
            Node *forw = curr->next;
            Node *nextpair = curr->next->next;
            forw->next = curr;
            curr->next = nextpair;
            prev->next = forw;
            prev = curr;
            curr = nextpair;
        }
        return temp->next;
    }
};