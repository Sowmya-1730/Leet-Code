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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int i=0;
        while(i<v.size())
        {
            ListNode* newNode=new ListNode(v[i]);
            temp->next=newNode;
            temp=temp->next;
            i+=1;
        }
        return dummy->next;
    }
};