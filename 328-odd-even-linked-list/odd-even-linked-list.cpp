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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even=new ListNode(-1);
         ListNode* odd=new ListNode(-1);
          ListNode* eventail=even;
           ListNode* oddtail=odd;
            ListNode* temp=head;
              int pos=1;
        while(temp!=NULL){
              ListNode* nextNode = temp->next;

          
        if (pos % 2 == 0){
                eventail->next=temp;
                eventail=eventail->next;
        }
    else{
            oddtail->next=temp;
            oddtail=oddtail->next;
    }
    
     temp = nextNode;
    pos++;
        }
        eventail->next = NULL;
    
             oddtail->next = even->next;

        ListNode* newhead = odd->next;

        delete even;
        delete odd;

        return newhead;
    }
};