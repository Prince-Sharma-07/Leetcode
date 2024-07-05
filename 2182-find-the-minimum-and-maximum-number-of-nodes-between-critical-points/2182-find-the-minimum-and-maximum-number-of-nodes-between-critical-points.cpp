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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL || head->next == NULL  )   return {-1 , -1};
               ListNode* P1 = head;
               ListNode* P2 = P1->next;
               if(P2->next == NULL) return {-1 , -1};
               int count = 1;
               vector<int> ans;
               while(P2->next!=NULL){
                  if((P1->val > P2->val && P2->next->val > P2->val) || (P1->val < P2->val && P2->next->val < P2->val)){
                    count++;
                    ans.push_back(count);
                    P1 = P2;
                    P2 = P2->next;
                  }
                  else{
                    count++;
                    P1 = P2;
                    P2 = P2->next;
                  }
               }
          if(ans.size()<2) return {-1,-1};
          vector<int> res(2);
          int mini = INT_MAX;
          for(int i = 0; i<ans.size()-1; i++){
              mini = min(ans[i+1]-ans[i] , mini);
          }
          res[0] = mini;
          res[1] = ans[ans.size()-1] - ans[0];
          return res;
    }
};