class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr_A = headA;
        ListNode *ptr_B = headB;
        while (ptr_A != ptr_B) {
            ptr_A = ptr_A ? ptr_A->next : headB;
            ptr_B = ptr_B ? ptr_B->next : headA;
        }
        return ptr_A;
    }
};