/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* next;
    struct ListNode* prev=NULL;
    if(head==NULL || head->next==NULL) return head;
    while(cur!=NULL){
        //next takes the after the value of current
        next=cur->next;//null
        //making the cur next value to null
        cur->next=prev;//4
        //making the prev to previous number
        prev=cur;//5
        //giving the curr to next 
        cur=next;//null
    }
    return prev;
}