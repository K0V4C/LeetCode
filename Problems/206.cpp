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

        if(!head)
            return nullptr;

        auto ahead = head->next;
        ListNode* prev = nullptr;

        while(ahead){
            head->next = prev;
            prev = head;
            head = ahead;
            ahead = ahead->next;
        }

        head->next = prev;
        
        return head;

    }
};