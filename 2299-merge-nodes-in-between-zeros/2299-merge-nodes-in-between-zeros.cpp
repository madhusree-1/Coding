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
    ListNode* mergeNodes(ListNode* head) {
        // ListNode* temp =head;
        ListNode* c = new ListNode(0);
        ListNode* cur = c;
        int cnt =0;
        int sum =0;
        head = head->next;
        while(head!=NULL){
            if(head->val == 0){
                cur->next = new ListNode(sum);
                cur = cur->next;
                sum=0;
            }
            else{
                sum+=head->val;
            }
            head = head->next;//0
        }
        // while(cur->next != NULL){
        //     head->val = cur->val;
        //     cur = cur->next;
        //     head = head->next;
        // }
        return c->next;
    }
};