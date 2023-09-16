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
    bool hasCycle(ListNode *head) 
    {
            unordered_map<ListNode*,int>mp;    
           ListNode *p=head;
        while(p!=NULL)
        {
            auto it = mp.find(p);
            if(it!=mp.end())
                return true;
            mp[p]++;
            p=p->next;
        }
        return false;
    }
};