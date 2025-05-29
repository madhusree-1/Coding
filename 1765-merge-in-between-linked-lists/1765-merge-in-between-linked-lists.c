/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *current1=list1;//10....
    struct ListNode *current2=list1;//10....
    struct ListNode *current3=list2;//100000...
    //loop for getting the head of the list2 attaching to a-1
    for(int i=0;i<a-1;i++){//0 1
        current1=current1->next;//iterate until it reaches before a-1
        // 1 13
    }
    //from example current1-->13
    //loop for getting the tail of the list2 after b nodes and to attach the tail of list 2 to this node
    for(int i=0;i<=b;i++){//0 1 2 3 4
        current2=current2->next;//1 13 6 9 5
        //current2-->5
    }

    //until list2 reaches the last element
    while(current3->next!=NULL){
        current3=current3->next;//1000002
    }
    //
    current1->next=list2;//13->next=1000000
    current3->next=current2;//1000002->next=5
    return list1;
}