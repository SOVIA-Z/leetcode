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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        int n=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
            
        };
        k = k%n;
        if (k == 0) return head;

        
        ListNode* current = head;
        for (int i = 1; i < n-k; i++) {
            current = current->next;
        }

       
        ListNode* newHead = current->next;
        current->next = nullptr;
        temp->next = head;

        return newHead;
 
    }
};