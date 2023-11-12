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

        if(list1 == nullptr and list2 == nullptr)
            return nullptr;

        if(list1 == nullptr)
            return list2;

        if(list2 == nullptr)
            return list1;

        ListNode* start = nullptr;
        ListNode* next = nullptr;

        while(list1 || list2){

            int min = -1;

            if(list1 != nullptr && list2 != nullptr){
                
                int tmp1 = list1->val;
                int tmp2 = list2->val;
                
                if(tmp1 < tmp2){
                    min = tmp1;
                    list1 = list1->next;
                } else {
                    min = tmp2;
                    list2 = list2->next;
                }


            } else if(list1 == nullptr){
                min = list2->val;
                list2 = list2->next;
            } else {
                min = list1->val;
                list1 = list1->next;
            }

            if(!start){
                start = new ListNode(min);
                next = start;
            } else {
                next->next = new ListNode(min);
                next = next->next;
            }

        }

        return start;
    }
};