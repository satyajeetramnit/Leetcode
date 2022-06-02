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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        int carry = 0;
        ListNode* result = NULL;
        ListNode* temp = NULL;
        while(list1 != NULL || list2 != NULL){
            int sum = 0;
            if(list1 != NULL){
                sum += list1->val;
                list1 = list1->next;
            }
            if(list2 != NULL){
                sum += list2->val;
                list2 = list2->next;
            }
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            temp = new ListNode();
            temp->val = sum;
            temp->next = result;
            result = temp;
        }
        if(carry > 0){
            temp = new ListNode();
            temp->val = carry;
            temp->next = result;
            result = temp;
        }
        // reverse result
        ListNode* prev = NULL;
        ListNode* curr = result;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        // return result;
    }
};