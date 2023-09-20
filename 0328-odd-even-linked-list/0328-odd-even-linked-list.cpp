/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(!head || !head->next) return head;
        ListNode *Even=new ListNode();
        ListNode *Odd=new ListNode();
        ListNode *p=Even,*q=Odd;
        long indx=1;
        while(head!=NULL)
        {
            if(indx%2==1)
            {
                q->next=head;
                q=head;
            }
            else if(indx%2==0)
            {
                p->next=head;
                p=head;
            }
            head=head->next;
            indx++;
        }
        q->next=Even->next;
        p->next=NULL;
        return Odd->next;
    }
};