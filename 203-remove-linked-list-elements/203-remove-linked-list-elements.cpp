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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *dummy=new ListNode(-1);
       dummy->next=head;
       ListNode *prev=dummy;
       ListNode *curr=head;
       while(curr!=NULL){
           if(curr->val==val){
               ListNode *temp=curr;
               prev->next=curr->next;
               delete temp;
               curr=prev->next;
           }
           else{
               prev=prev->next;
               curr=curr->next;
           }
          
       }
        return dummy->next;
    }
    
};