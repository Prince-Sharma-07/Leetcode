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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr;

        ListNode* temp = head;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        left-- , right--;
        while(left < right){
            swap(arr[left++] , arr[right--]);
        }
        temp = head;
        left = 0;
        while(left < arr.size()){
            temp->val = arr[left];
            left++;
            temp = temp -> next;
        }
        return head;
    }
};