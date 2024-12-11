/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 || l2 || carry) {
            int val1 = l1 ? l1->val : 0; // Get value from l1 or 0 if it's null
            int val2 = l2 ? l2->val : 0; // Get value from l2 or 0 if it's null

            // Calculate sum and carry
            int sum = val1 + val2 + carry;
            carry = sum / 10;

            // Add the current digit to the result list
            current->next = new ListNode(sum % 10);
            current = current->next;

            // Move to the next nodes in the input lists
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        // Return the head of the resulting list
        return dummyHead->next;
    }
};