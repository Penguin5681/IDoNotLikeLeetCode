using node = ListNode;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        node* slow = head;
        node* fast = head;

        while (fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) 
                return true;
        }
        return false;
    }
};