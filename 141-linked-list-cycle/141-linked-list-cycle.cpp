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
        if(!head)
            return false;
        ListNode* fast=head->next,*slow=head;
        while(slow)
        {
            if(!fast||!fast->next)
                break;
            if(fast==slow)
                return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
        
    }
};