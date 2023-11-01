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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head)
            return nullptr;

        auto ahead = head->next;
        auto prev = head;


        while(ahead){

            auto start = ahead;

            while(ahead && ahead->val == prev->val){
                auto temp = ahead->next;
                delete ahead;
                ahead = temp;
            }

            prev->next = ahead;
            prev = ahead;

            if(!ahead)
                break;

            ahead = ahead->next;
        }

        return head;
    }
};