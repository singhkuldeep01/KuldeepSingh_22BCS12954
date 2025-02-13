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
        ListNode* i=list1;
        ListNode* j=list2;
        ListNode* dummy= new ListNode(0);
        ListNode* current=dummy;

        while(i!=NULL && j!=NULL){
            if(i->val <= j->val){
                current->next=i;
                i=i->next;
            }else{
                current->next=j;
                j=j->next;
            }
            current=current->next;
        }
        while(i!=NULL){
           current->next=i;
                i=i->next;
                current=current->next;
        }
         while(j!=NULL){
           current->next=j;
                j=j->next;
                current=current->next;
        }
     return dummy->next;
    }
};