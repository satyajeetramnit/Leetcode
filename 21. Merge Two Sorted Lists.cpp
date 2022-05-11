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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;
        
        ListNode* head;
        auto& head_pick = list1->val < list2->val ? list1 : list2;
        head = head_pick;
        head_pick = head_pick->next;
        
        ListNode* tail = head;
        while (list1 && list2) {
            auto& pick = list1->val < list2->val ? list1 : list2;
            tail = tail->next = pick;
            pick = pick->next;
        }
        tail->next = list1 ? list1 : list2;
        return head;
    }
};