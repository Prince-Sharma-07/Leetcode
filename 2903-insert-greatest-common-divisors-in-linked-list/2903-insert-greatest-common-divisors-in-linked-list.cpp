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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        //  vector<int> values;
        //  vector<int> hcf;
         ListNode* temp = head;
        //  while(temp){
        //     values.push_back(temp->val);
        //     temp = temp->next;
        //  }

        //  for(int i = 0; i<values.size()-1; i++){
        //      hcf.push_back(__gcd(values[i] , values[i+1]));
        //  }

        //  int i = 0;
         temp = head;
         while(temp->next){
            ListNode* ptr = temp;
            ptr = temp->next;
            temp->next = new ListNode(__gcd(temp->val , ptr->val));
            temp = temp->next;
            temp->next = ptr;
            temp = temp->next;
         }
         return head;
    }
};