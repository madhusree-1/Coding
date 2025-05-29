/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
     if(head==NULL) return  NULL;
    if(head->next==NULL) return head;
    struct ListNode temp;
    temp.next=head;
    struct ListNode* prev=&temp;
    //struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    while(head!=NULL && head->next!=NULL){
        struct ListNode* first =head;
        struct ListNode* second=head->next;
        // prev=temp;//2
        // temp=temp->next;//3
        // newnode=temp;//2
        // newnode->next=prev;//1
        // temp=temp->next;
        first->next=second->next;
        second->next=first;
        prev->next=second;
        prev=first;
        head=first->next;
    }
    return temp.next;
}