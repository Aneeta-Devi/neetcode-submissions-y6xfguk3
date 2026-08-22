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
        ListNode* temp=head;
        vector<int>ans;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        ListNode *dummy=new ListNode();
        ListNode *tem=dummy;
        int n=ans.size();
        for(int i=0;i<n;i++){
            dummy->next=new ListNode(ans[i]);
            dummy=dummy->next;
        }
        return tem->next;
    }
};
