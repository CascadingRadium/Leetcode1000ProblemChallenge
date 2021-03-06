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
    ListNode* mergeTwoLists(ListNode* temp1, ListNode* temp2) 
    {
        if(!temp1)
            return temp2;
        if(!temp2)
            return temp1;
        ListNode* ret;
        if(temp1->val<=temp2->val)
        {
            temp1->next=mergeTwoLists(temp1->next,temp2);
            ret= temp1;
        }
        else
        {
            temp2->next=mergeTwoLists(temp1,temp2->next);
            ret= temp2;
        }
        return ret;
    }
};