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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int ans = 0;
        vector<int> no;
        while(temp){
            no.push_back(temp->val);
            temp = temp->next;
        }
        int n = no.size()-1;
        int e = 0;
        for(int i = n; i>=0; i--){
            if(no[i] == 1){
                ans += pow(2,e);
            }
            e++;
        }
        return ans;
    }
};