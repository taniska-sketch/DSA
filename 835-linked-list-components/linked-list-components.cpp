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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode* temp=head;
        int component =0;
        int count=0;
        int prevcount=0;
        while(temp!=NULL){
        
        count=0;
        for(int i=0;i<nums.size();i++){
            if(temp->val==nums[i])
            count++;}
            if(count>0 && prevcount==0){
                component++;
            }
       prevcount=count;
       temp=temp->next;
        }
        return component;
    }
};