/**
 * Date: 2020/06/02 - Leet code June Daily challenge
 * Title: 02 Delete Node
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // To solve this problem,
    // swap value of target node to the tail, 
    // so list stays connected and the node can be deleted.
    // first approach
    void deleteNode(ListNode* node) {
        int temp;
        ListNode* curr = node;
        ListNode* target = node->next;
        while(target->next != nullptr)
        {
            // swap values
            temp = curr->val;
            curr->val = target->val;
            target->val = temp;
            
            // increment
            curr = curr->next;
            target = target->next;
        }
        temp = curr->val;
        curr->val = target->val;
        target->val = temp;
 
        // set the curr as tail
        curr->next = nullptr;
        // then discard target node
        delete target;
    }
    // improved one(simple)
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};