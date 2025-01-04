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
         list<int> Temp;
         ListNode* it1 = list1 , *it2 = list2;
         while(it1 && it2){
            if(it1->val <= it2->val){
                Temp.push_back(it1->val);
                it1 = it1->next;
            }
            else {
              Temp.push_back(it2->val);
              it2 = it2->next;
            }
         }
         while(it1){
             Temp.push_back(it1->val);
             it1 = it1->next;
         }
         while(it2){
             Temp.push_back(it2->val);
             it2 = it2->next;
         }
         ListNode* dummy = new ListNode(0);
         ListNode* curr = dummy;
         for(auto i : Temp){
           curr->next = new ListNode(i);
           curr = curr->next;
         }
         ListNode* ans = dummy->next;
         delete dummy;
         delete it1;
         delete it2;
         return ans;
    }
};