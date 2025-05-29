/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode curr1 = list1;
        ListNode curr2 = list1;
        ListNode curr3 = list2;
        //Iterate list1 until you reach the node at a-1 so that you can point the next of the curr1 to the head of the list2
        for(int i=0;i<a-1;i++){
            curr1 = curr1.next;
        }
        //Iterate list1 until you reach the node at b+1 so that you can point the last node of the list2 to the curr2
        for(int i=0;i<=b;i++){
            curr2 = curr2.next;
        }

        //find the last node of the list2
        while(curr3.next != null){
            curr3 = curr3.next;
        }

        //(from the testcase1 point curr1(13).next to head of the list2(1000000))
        curr1.next = list2;
        //point the last node of the list2's next(1000002) to the curr2(5) 
        curr3.next = curr2;
        //return the updated list1
        return list1;



    }
}