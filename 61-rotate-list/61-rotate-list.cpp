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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        ListNode *temp=head;
        if(head==NULL || head->next==NULL) return head;
        if(k==0) return head;
        while(temp->next!=NULL){
           temp=temp->next;
           len++;
        }
        k=k%len;
        temp->next=head;
        int traversal=len-k;
        int i=0;
        while(i<traversal){
            temp=temp->next;
            i++;
        }
        ListNode *newhead=head;
        newhead=temp->next;
        temp->next=NULL;
        return newhead;
        
    }
};