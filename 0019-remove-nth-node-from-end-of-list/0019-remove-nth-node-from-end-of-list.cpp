class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;        
        ListNode newHead(-1);
        newHead.next = head;

        ListNode *slow = &newHead;
        ListNode *fast = &newHead;
            for (int i = 0; i < n; ++i)
                fast = fast->next;
        
            while (fast->next) {
                fast = fast->next;
                slow = slow->next;
        
            }
        ListNode *toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete; 
        return newHead.next;
    }
};