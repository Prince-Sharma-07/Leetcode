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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* P1 = l1 , *P2 = l2 , *temp;
         ListNode* ans = new ListNode(0);
         temp = ans;
         int carry = 0;
         while(P1!=NULL || P2!=NULL){
            if(P1!=NULL && P2!=NULL){
                int sum = P1->val+P2->val;
                temp->next = new ListNode((sum+carry)%10);
                temp = temp->next;
                if(sum + carry > 9) carry = 1;
                else carry = 0;
                P1 = P1->next;
                P2 = P2->next;
            }
            else if(!P2){
                temp->next = new ListNode((P1->val + carry)%10);
                if(P1->val + carry > 9) carry = 1;
                else carry = 0;
                temp = temp->next;
                P1 = P1->next;

            }
            else{
                temp->next = new ListNode((P2->val + carry)%10);
                if(P2->val + carry > 9) carry = 1;
                else carry = 0;
                temp = temp->next;
                P2 = P2->next;
            } 
         }
         if(carry) temp->next = new ListNode(carry);
         return ans->next;
    }
};