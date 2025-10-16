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
    int pairSum(ListNode* head) {
        vector<int>res;
        ListNode* temp = head;
        while(temp!= NULL){
            int cur = temp->val;
            res.push_back(cur);
            temp= temp->next;
        }
        int maxi =0;
        int sum=0;
        for(int i=0;i<res.size()/2;i++){
            sum = res[i] + res[res.size()-i-1];
            if(sum > maxi){
                maxi = sum;
            }
        }
        return maxi;
    }
};