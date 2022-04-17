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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        vector<int> all;
        for(int i=0;i<lists.size();i++)
        {
            if(!lists[i])
                continue;
            ListNode* head = lists[i];
            while(head)
            {
                all.push_back(head->val);
                head=head->next;
            }
        }
        sort(all.begin(),all.end());
        if(all.size()==0)
            return NULL;
        ListNode* head=new ListNode(all[0]);
        ListNode*prev=head;
        for(int i=1;i<all.size();i++)
        {
            ListNode* cur=new ListNode(all[i]);
            prev->next=cur;
            prev=cur;
        }
        return head;
    }
};