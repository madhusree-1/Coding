/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode *temp=head;
// int flag =0;
// while(temp!=1e9){
//     temp->val = 1e9;
//     temp=temp->next;
//     flag=1;
// }
// return flag;
bool hasCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return false;
    struct ListNode *slow = head;
    struct ListNode *fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        if (slow == fast)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}