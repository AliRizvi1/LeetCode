/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
import java.lang.Math;

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        //Combine the linked list numbers (in reverse order), add, then put back into a linkedList again in reverse order.
        int num1 = 0, num2 = 0, i = 0, j = 0;
        //Is there a getLength() function? Apparently not
        
        //Numbers will be in reverse order.
        while (l1 != null) {
            num1 += l1.val * (Math.pow(10,i));
            //pow is to the power of function
            i++;
            l1 = l1.next;
        }
        while (l2 != null) {
            num2 += l2.val * (Math.pow(10,j));
            j++;
            l2 = l2.next;
        }
        //Simply add the two numbers together
        int num = num1 + num2;
        //Place them in reverse order in a new list.
        ArrayList<Integer> arr = new ArrayList<Integer>();
        i = 0;
        //Need a val for the constructor:
        while (num > 0) {
            //Numbers will be put back in to an int array in reverse order
            arr.add(i, (int) (num % (Math.pow(10,i))));
            num = num % 10;
            i++;
        }
        ListNode ret = new ListNode(arr.get(0));
        for (int x = 1; x < arr.size(); x++) {
            //setting the old value into a temp ListNode
            ListNode temp = ret;
            ret = new ListNode(arr.get(x));
            ret.next = temp;
        }
        return ret;
    }
    
}
