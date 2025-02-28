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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* res = head , *temp = res->next , *temp2 = res->next;

        while(res->next && temp->next){
            res->next = temp->next;
            res = res->next;
            temp->next = res->next;
            temp = temp->next;
        }

        res->next = temp2;
        return head;
    }
};