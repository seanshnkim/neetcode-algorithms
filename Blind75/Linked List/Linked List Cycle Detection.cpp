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
    bool hasCycle(ListNode* head) {
        ListNode* node = head;
        unordered_set<int> hash;

        while (node->next) {
            if(hash.find(node->val) == hash.end()) {
                hash.insert(node->val);
                node = node->next;
            }
            else {
                return true;
            }
        }
        return false;
    }
};

// head = [1, 2, 3, 4, 5]
// index = 3

// 1 -> 2 -> 3 -> 4 -> 5
//                ^
//                |    |
//                ------