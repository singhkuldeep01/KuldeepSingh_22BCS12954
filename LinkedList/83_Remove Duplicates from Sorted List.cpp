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
       ListNode* temp = head;
       while(temp) {
        while(temp && temp->next && (temp->val == temp->next->val)){
            ListNode* temp1 = temp->next;
            temp->next = temp->next->next;
            delete(temp1);
            // temp = temp->next;
        }
        if(temp)
        temp = temp->next;
       }
       return head;
    }
};