/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode *temp =head;
    struct ListNode *prev=NULL;
    int tc=1;
    if(head->next==NULL) return NULL;
    else{
        while(temp->next!=NULL){
            temp=temp->next;
            tc++;
        }
    }
    temp=head;
    int pos=(tc/2)+1;//4
    int count=1;
    while(count<pos){//4
        count++;//4
        prev=temp;//4
        temp=temp->next;//7
    }
    prev->next=temp->next;
    return head;
}