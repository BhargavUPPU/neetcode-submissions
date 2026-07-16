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
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        vector<int> merge;
        while(list1!=nullptr || list2!=nullptr){
            if(list1){
                merge.push_back(list1->val);
                list1=list1->next;
            }
            if(list2){
                merge.push_back(list2->val);
                list2=list2->next;
            }
        }
        sort(merge.begin(),merge.end());
        for(int i=0;i<merge.size();i++){
            temp->next=new ListNode(merge[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};
