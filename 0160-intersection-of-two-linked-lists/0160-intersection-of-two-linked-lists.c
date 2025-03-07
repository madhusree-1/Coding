struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1 = headA;
    struct ListNode *p2 = headB;

    // Move pointers p1 and p2 along the lists to the en

    // If one of the pointers reached the end of its list, redirect it to the other list's head
    while(p1||p2){
    if (p1 == NULL) {
        p1 = headB;
    }
    if (p2 == NULL) {
        p2 = headA;
    }
    if(p1==p2) break;
        p1 = p1->next;
        p2 = p2->next;
    }
    // Now iterate together, comparing their nodes

    return p1;  // Return the intersection node (or NULL if no intersection)
}
