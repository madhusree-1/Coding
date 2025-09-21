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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int count =1;
        while(temp->next != NULL)
        {
            temp=temp->next;
            count++;
        }
        int pos = count - n ;
        if(pos == 0){
            ListNode * t = head;
            head=head->next;
            delete t;
            return head;
        }
        temp = head;
        for(int i=1;i<=pos -1 ;i++){
            temp = temp->next;
        }
        ListNode* p = temp->next;
        temp->next = temp->next->next;
        delete p;
        return head;
    }
};