/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *fst=head,*slw=head;
        while(fst!=NULL && fst->next!=NULL)
        {
            slw=slw->next;
            fst=fst->next->next;
            if(slw==fst)
            {
                slw=head;
                while(slw!=fst)
                {
                    slw=slw->next;
                    fst =fst->next;
                }
                if(slw==fst)
                     return slw;
            }
        }
        return NULL;
    }
};