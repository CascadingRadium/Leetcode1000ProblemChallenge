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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0;
        int sum=0;
        ListNode* prev;
        ListNode* head=l1;
        while(l1)
        {
            if(l2)
            {
                sum=(l1->val+carry+l2->val);
                l2=l2->next;
            }
            else
                sum=l1->val+carry;
            l1->val=sum%10;
            carry=sum/10;
            prev=l1;
            l1=l1->next;
        }
        while(l2)
        {
            sum=l2->val+carry;
            ListNode* cur=new ListNode(sum%10);
            prev->next=cur;
            prev=cur;
            carry=sum/10;
            l2=l2->next;
        }
        if(carry>0)
        {
            ListNode* cur=new ListNode(1);
            prev->next=cur;
        }
        return head;
    }
};