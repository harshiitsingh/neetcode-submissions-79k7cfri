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
        ListNode* tmp=head;
        unordered_set<ListNode*>st;
        while(tmp!=nullptr){
            if(st.find(tmp) != st.end()) return true;
            st.insert(tmp);
            tmp = tmp->next;
        }
        return false;
    }
};
