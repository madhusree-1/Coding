/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp=head;
    int count=0,val=0,sum=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    printf("count is %d",count);
    temp=head;
    count=count+1;
    while(temp != NULL && count>0){
        val=(temp->val)*pow(2,count-1);
        printf(" val %d",val);
        sum+=val;
        count--;
        temp=temp->next;
    }
    return sum;
}