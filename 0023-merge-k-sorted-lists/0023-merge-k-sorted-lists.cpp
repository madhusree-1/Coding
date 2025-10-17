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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>sorte;
        for(auto i=0;i<lists.size();i++){
           while(lists[i]!=NULL){
                int ori = lists[i]->val;
                sorte.push_back(ori);
                lists[i]=lists[i]->next;
            }
        }
        sort(sorte.begin(),sorte.end());
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        for(int i=0;i<sorte.size();i++){
            cur->next = new ListNode(sorte[i]);
            cur = cur->next;
        }
        return dummy->next;
    }
};