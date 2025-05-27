/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    //to remove the matching heads
    while (head != NULL && head->val == val) {
        struct ListNode* toDelete = head;
        head = head->next;
        free(toDelete);
    }
    struct ListNode *temp = head;
    struct ListNode *prev =NULL;
    if(head==NULL) return NULL;
    while(temp!=NULL && temp->next!=NULL){
         if(temp->next->val==val){
            prev=temp->next;//7
            temp->next=temp->next->next;//7
            //prev->next=temp->next;
            free(prev);
        }
        else temp=temp->next;
    }
    return head;
}