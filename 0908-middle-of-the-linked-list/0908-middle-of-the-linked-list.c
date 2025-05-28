/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode* Create_A_Node(int val){
//     struct ListNode*Newnode;
//     Newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     Newnode->data = val;
//     Newnode->next = NULL;
// }
struct ListNode* middleNode(struct ListNode* head) {
    int tc=1;
    struct ListNode* temp=head;
    if(head->next==NULL) return head;
    else{
        while(temp->next!=NULL){
            temp=temp->next;
            tc++;
        }
    }
    printf("%d",tc);
    int pos;
    //if(tc%2==0){
    //pos=(tc/2);
    //}
    //else{
    pos=(tc/2)+1;
    //}
    int count = 1;
    //struct ListNode* newnode = Create_A_Node(val);
   // temp = head;
	while(count!=pos){
        count++;
		head=head->next;
	}
    return head;
}