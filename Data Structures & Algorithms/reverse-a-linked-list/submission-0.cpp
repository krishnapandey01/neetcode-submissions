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
        
        ListNode *curr = head;
        ListNode *t2 = nullptr;
        ListNode *t3 = nullptr;

        while(curr!=nullptr)
        {
            t2 = curr->next;
            curr->next = t3;
           
            t3 = curr;
            curr = t2;
        }

        return t3;
    }
};
