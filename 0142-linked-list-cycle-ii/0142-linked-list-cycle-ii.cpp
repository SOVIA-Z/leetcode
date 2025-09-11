/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                isCycle = true;
                break;
            }
        }

        if(!isCycle){
            return NULL;
        }

        // slow = head;
        // ListNode *prev = NULL;

        // while(slow != fast){
        //     slow = slow->next;
        //     prev = fast ;
        //     fast = fast->next;

        // }
        // prev->next = NULL;
        // return slow;

            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            // Find the last node in cycle and break it
            ListNode* ptr = slow;
            while (ptr->next != slow) {
                ptr = ptr->next;
            }
            ptr->next = NULL;

            return slow; // returning cycle start
        
        
    }
};