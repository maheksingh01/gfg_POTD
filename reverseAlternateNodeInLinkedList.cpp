class Solution
{
public:
    void rearrange(struct Node *head)
    {
        // 1 node is not req to rearrange
        if (head->next == NULL)
            return;

        Node *p = head, *prev = NULL, *altHead = NULL, *copy;
        int cnt = 1;

        for (; p != NULL;)
        {
            // Keep odd positioned node as it is
            // temporarily del even positioned node and store in a new ll(altHead)
            // for reversing the even positioned nodes inserted in altHead ,
            // insert at beg each time as then it gets automatically reversed
            if (cnt % 2 == 0)
            {
                prev->next = p->next;
                copy = p->next; // to avoid lose of add of next ll
                p->next = altHead;
                altHead = p;

                p = copy; // imp
            }
            else
            {
                // not req to move prev when even positioned nodes are deleted bz
                // after del p goes to next ll but prev remains just behind p
                prev = p;
                p = p->next; // imp
            }

            cnt++;
        }
        // append reversed eveb positioned node at end of head
        prev->next = altHead;
    }
}