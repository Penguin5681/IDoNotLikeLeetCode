class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummyHead = new ListNode(0);
        ListNode tailNode = dummyHead;
        int carryValue = 0;

        while (l1 != null || l2 != null || carryValue != 0) {
            int digit1 = (l1 != null) ? l1.val : 0;
            int digit2 = (l2 != null) ? l2.val : 0;

            int sum = digit1 + digit2 + carryValue;
            int lastDigit = sum % 10;
            carryValue = sum / 10;

            ListNode newNode = new ListNode(lastDigit);
            tailNode.next = newNode;
            tailNode = tailNode.next;

            l1 = (l1 != null) ? l1.next : null;
            l2 = (l2 != null) ? l2.next : null;
        }

        ListNode resultList = dummyHead.next;
        dummyHead.next = null;
        return resultList;
    }
}