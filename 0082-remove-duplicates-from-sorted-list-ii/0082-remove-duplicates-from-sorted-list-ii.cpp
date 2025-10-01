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
        // unordered_map<int, int> freq;
        // ListNode* curr = head;
        // while (curr) {
        //     freq[curr->val]++;
        //     curr = curr->next;
        // }

        // ListNode* dummy = new ListNode(0);
        // ListNode* tail = dummy;
        // curr = head;
        // while (curr) {
        //     if (freq[curr->val] == 1) {
        //         tail->next = new ListNode(curr->val);
        //         tail = tail->next;
        //     }
        //     curr = curr->next;
        // }
        // return dummy->next;

        
        if(!head) return nullptr;

        vector<int> arr;
        ListNode* curr = head;
        while(curr){
            arr.push_back(curr -> val);
            curr = curr-> next;
        }

        vector<int> ans;
        for(int i = 0; i < arr.size();){
            int j = i + 1;
            while(j < arr.size() && arr[j] == arr[i]){
                j++;
            }

            if(j == i +1){
                ans.push_back(arr[i]);
            }
            i = j;
        }

        ListNode* temp = new ListNode();
        temp->next = nullptr;
        ListNode* tail = temp;

        for(int i = 0; i < ans.size(); i++){
            tail->next = new ListNode(ans[i]);
            tail = tail -> next;
        }
        return temp-> next;
        
    }
};