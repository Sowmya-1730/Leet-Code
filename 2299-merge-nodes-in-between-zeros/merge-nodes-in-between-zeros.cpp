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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res=new ListNode(0);
        ListNode* temp=head->next;
        ListNode* t=res;
        int s=0;
        while(temp)
        {
            if(temp->val!=0)
            {
                s+=temp->val;
            }
            else
            {
                ListNode* nn=new ListNode(s);
                while(t->next!=NULL)
                {
                    t=t->next;
                }
                t->next=nn;
                s=0;
            }
            temp=temp->next;
        }
        return res->next;
    }
};