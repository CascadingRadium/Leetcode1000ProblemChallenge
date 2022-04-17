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
    ListNode* swapPairs(ListNode* head) 
    {
        if(!head)
            return NULL;
        vector<ListNode*> arr;
        ListNode* temp=head;
        while(temp)
        {
            arr.push_back(temp);
            temp=temp->next;
        }
        for(int i=1;i<arr.size();i+=2)
        {
            arr[i]->next=arr[i-1];
            swap(arr[i],arr[i-1]);
        }
        for(int i=1;i<arr.size();i+=2)
        {
            if(i+1==arr.size())
                arr[i]->next=NULL;
            else
                arr[i]->next=arr[i+1];
        }
        head=arr[0];
        return head;
    }
};