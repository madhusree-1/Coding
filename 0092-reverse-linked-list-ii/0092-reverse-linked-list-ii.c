/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {   
    struct ListNode *cur1=NULL;//1
    struct ListNode *cur=head;
    for(int i=1;i<left;i++){// 0 
        cur1=cur;//2
        cur=cur->next;
    }
    // for(int i=0;i<right;i++){//0 1 2 3 
    //     cur2=cur2->next;//5
    // }
    struct ListNode* next;
    struct ListNode* tail= cur;//2
    struct ListNode* prev=NULL;//5
    //1 2 3 4 5
    for(int i=0;i<=right-left;i++){
        next=cur->next;//4
        cur->next=prev;//2
        prev=cur;//2
        cur=next;//3
    }
    if(cur1!=NULL){
        cur1->next=prev;
    }
    else{
        head=prev;
    }
    tail->next=cur;
    return head;
}