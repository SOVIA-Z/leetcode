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
    ListNode* partition(ListNode* head, int x) {
        ListNode* slist = new ListNode(0, nullptr);
        ListNode* grlist = new ListNode(0, nullptr);
        ListNode* smaller = slist;
        ListNode* greater = grlist;

        while (head != nullptr) {
            if (head->val < x) {
                smaller->next = head;
                smaller = smaller->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        smaller->next = grlist->next;
        greater->next = nullptr;

        ListNode* result = slist->next;
        return result;



        
    }
};