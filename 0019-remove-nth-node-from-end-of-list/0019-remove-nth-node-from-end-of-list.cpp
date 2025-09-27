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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        
        int npos = len - n;  // position from start (0-indexed)

        // Case 1: delete head
        if (npos == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Case 2: delete at pos
        ListNode* prev = head;
        for (int i = 1; i < npos; i++) {
            prev = prev->next;
        }

        ListNode* nDelete = prev->next;
        prev->next = nDelete->next;
        delete nDelete;

        return head;
        
    }
};