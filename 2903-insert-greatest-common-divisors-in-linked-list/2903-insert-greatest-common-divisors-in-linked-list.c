/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int a,int b){
     while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// struct ListNode* insertAtBeginning(struct ListNode* head, int value) {
//     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     newNode->val = value;
//     newNode->next = head;
//     return newNode; // New head
// }
// struct ListNode* insertAtEnd(struct ListNode* head, int value) {
//     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     newNode->val = value;
//     newNode->next = NULL;

//     if (head == NULL) return newNode;

//     struct ListNode* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return head;
// }

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* temp = head;
    //struct ListNode *prev=NULL;
    if(head==NULL) return NULL;
    if(temp->next == NULL ) return head;
    //insertion
    while(temp!=NULL && temp->next != NULL){
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=gcd(temp->val,temp->next->val);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=newnode->next;
    }
    return head;
}