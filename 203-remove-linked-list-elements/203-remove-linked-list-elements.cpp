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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* tmp=head,*prev=NULL;
        while(tmp)
        {
            if(tmp->val==val)
            {
                if(tmp==head)
                    head=head->next;
                else
                    prev->next=tmp->next;
                tmp=tmp->next;
            }
            else
            {
                prev=tmp;
                tmp=tmp->next;
            }
        }
        return head;
    }
};