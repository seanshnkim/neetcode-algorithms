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
    ListNode* reverseList(ListNode* head) {
        // if (!head || !head->next) {
        //     return head;
        // }
        // ListNode* tailNode = reverseList(head->next);
        // head->next = NULL;
        // tailNode->next = head;

        // return head;

        if (!head || !head->next) {
            return head;
        }
        ListNode* reversedHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return reversedHead;
    }
    // ListNode* findTail(ListNode* head) {
    //     if (!head || !head->next) {
    //         return head;
    //     }
    //     ListNode* node = head->next;
    //     while(node->next){
    //         node = node->next;
    //     }
    //     return node;
    // }
};
