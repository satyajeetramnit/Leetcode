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
//     ListNode* reverse(ListNode* &head){
//         ListNode* prevptr=NULL;
//         ListNode* currptr=head;
//         ListNode* nxtptr;
//         while(currptr != NULL){
//             nxtptr = currptr->next;
//             currptr->next = prevptr;

//             prevptr=currptr;
//             currptr=nxtptr;
//         }
//         return prevptr;
//     }
    
    int length(ListNode* &head){
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // n=length(head)-n-1;
        ListNode *fast = head;
        ListNode *slow = head;
        for (int i = 0; i < n; i++) 
            fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) 
            fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
    }
};