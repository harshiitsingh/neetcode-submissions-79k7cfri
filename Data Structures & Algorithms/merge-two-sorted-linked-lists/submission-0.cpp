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
        ListNode dummy(0);
        ListNode* ans = &dummy;
        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;

        while(tmp1!=nullptr && tmp2!=nullptr){
            if(tmp1->val < tmp2->val){
                ans->next = tmp1;
                tmp1 = tmp1->next;
            }
            else{
                ans->next = tmp2;
                tmp2 = tmp2->next;
            }
            ans = ans->next;
        }

        if(tmp1){
            ans->next = tmp1;
        }
        else{
            ans->next = tmp2;
        }

        return dummy.next;
    }
};
