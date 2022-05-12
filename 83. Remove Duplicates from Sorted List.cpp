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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *p=head, *q=head->next;
        while(q!=NULL){
            if(p->val == q->val){
                p->next=q->next;
                q=q->next;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
};