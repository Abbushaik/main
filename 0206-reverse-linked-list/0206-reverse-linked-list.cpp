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
    ListNode *ans;
    void reverse(ListNode *q, ListNode*p) 
        {
            if(p!=NULL) 
            {
                 reverse(p, p->next);
                  p->next=q;
             }
            else
             {
                 ans=q;
              }
                
    }            
    ListNode* reverseList(ListNode* head) {
        
        reverse(nullptr, head) ;
        return ans;
    }
};