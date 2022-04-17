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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* node=head;
        int len=0;
        while(node)
        {
            len++;
            node=node->next;
        }
        node=head;
        int index=len-n;
        if(index==0)
            head=head->next;
        else
        {
            len=0;
            ListNode*prev=head;
            while(node)
            {
                if(len==index)
                {
                    prev->next=node->next;
                    break;
                }
                len++;
                prev=node;
                node=node->next;
            }
        }
        return head;
            
        
    }
};