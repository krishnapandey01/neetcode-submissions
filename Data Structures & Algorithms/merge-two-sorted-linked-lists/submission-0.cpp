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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==nullptr&& list2==nullptr)
         return nullptr;
        else if(list1==nullptr|| list2==nullptr)
        {
            return list1!=nullptr?list1:list2;
        }

        // int value = (lis1->val)>(list2->val) ? list1->val:list2->val;
        
        ListNode *h1 = new ListNode();
        ListNode *curr = h1;

        while(list1 != nullptr || list2 != nullptr)
        {
            if(list1 !=nullptr && list2!=nullptr) 
            {
               if(list1->val<=list2->val)
               {
                    cout << list1->val<<" ";
                    curr->next = new ListNode(list1->val);
                    list1 = list1->next;

               }
               else
               {
                    cout << list2->val<<" ";
                    curr->next = new ListNode(list2->val);
                    list2 = list2->next;
               }
               curr = curr->next;
            }
            else
            {
                curr->next = list1==nullptr?list2:list1;
                cout<< curr->next->val;
                break;
            }
        }
        return h1->next;
        
    }
};
