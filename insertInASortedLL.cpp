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
};

class Solution
{
public:
    Node *sortedInsert(struct Node *head, int data)
    {
        Node *newNode = new Node(data);
        Node *curr = head;
        Node *prev = NULL;
        while (curr != NULL)
        {
            if (curr->data > data)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        // to check insert at first
        if (prev == NULL)
        {
            newNode->next = head;
            head = newNode;
        }
        // to check insert in middle or last
        else
        {
            Node *temp = prev->next;
            prev->next = newNode;
            newNode->next = temp;
        }
        return head;
    }
};