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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        if(head->next==nullptr)return 0;
        while(temp){
            temp=temp->next;
            count++;
        }
        count=count/2;
        temp=head;
        while(temp){
            if(count==1){
                temp->next=temp->next->next;
            }
            count--;
            temp=temp->next;
        }
        return head;
    }
};