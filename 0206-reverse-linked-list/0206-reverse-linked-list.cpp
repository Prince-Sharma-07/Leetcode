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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
       ListNode* prev = head, *curr = head->next;
       while(curr && curr->next){
         ListNode* temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;
       }
       curr->next = prev;
       head->next = NULL;
       return curr;
    }
};