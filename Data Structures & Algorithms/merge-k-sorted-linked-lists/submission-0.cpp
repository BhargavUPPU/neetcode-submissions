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
class comparator{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a ->val > b->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue<ListNode*, vector<ListNode*> ,comparator> pq;
         for(auto it :lists){
            if(it){
            pq.push(it);
            }
         }
         ListNode* dummy=new ListNode(0);
         ListNode* temp=dummy;
         while(!pq.empty()){
            ListNode* curr_node=pq.top();
            temp->next=curr_node;
            temp=temp->next;
            pq.pop();
            if(curr_node->next){
            pq.push(curr_node->next);
            }
         }
         return dummy->next;
        
    }
};
