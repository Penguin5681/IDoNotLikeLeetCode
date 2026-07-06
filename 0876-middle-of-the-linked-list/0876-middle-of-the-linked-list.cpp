using node = ListNode;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        node* slow = head;
        node* fast = head;

        while (fast->next and fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return fast->next ? slow->next:slow;
    }
};