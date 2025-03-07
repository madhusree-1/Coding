/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode * i = list1;
    struct ListNode * j = list2;
    struct ListNode *newnode;//created the newnode to store the sorted linked list
    ///temp ,head should be allocated
    newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=-1;// intilising the valu to -1
    newnode->next=NULL;
    struct ListNode *temp =newnode;
    while(i && j){
    if(i->val < j->val){
        temp->next=i;
        i=i->next;
    }
    else{
        temp->next = j;
        j=j->next;
    }
    temp=temp->next;
    }
    if(i!=NULL){
        temp->next=i;
    }
    if(j!=NULL){
        temp->next = j;
    }
    return newnode->next;
}