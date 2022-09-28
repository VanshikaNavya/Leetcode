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
        int len=0;
        ListNode* prev = head;
        ListNode* temp = head;
        ListNode* curr = head->next;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(head==NULL || head->next==NULL) return NULL;
        if(n==len){
            ListNode* temp1 = head;
            head=head->next;
            delete temp1;
            return head;
        }
        
        int traverse = len-n-1;
        while(traverse--){
            prev=prev->next;
            curr=curr->next;
        }
        
        prev->next=curr->next;
        delete curr;
        return head;
        
        
    }
    
    
};