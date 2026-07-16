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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy=new ListNode(-1);
       dummy->next=head;
        ListNode* leader= dummy;
        ListNode* trailer= dummy;

        for(int i=0;i<=n;i++){
            leader=leader->next;
        }
        while(leader!=nullptr){
            leader=leader->next;
            trailer=trailer->next;
        }
        trailer->next=trailer->next->next;
        return dummy->next;
        
    }
};
