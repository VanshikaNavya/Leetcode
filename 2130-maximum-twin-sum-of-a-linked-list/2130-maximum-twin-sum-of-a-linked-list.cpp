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
    ListNode *mid(ListNode *head){
        ListNode *fast=head->next;
        ListNode *slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }
    ListNode *reverse(ListNode *head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *smaller=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return smaller;
        
    }
    int pairSum(ListNode* head) {
       if(head==NULL) return -1;
       if(head->next->next==NULL) return (head->val+head->next->val);
       ListNode *middle=mid(head);
       ListNode *after_mid=middle->next;
       middle->next=NULL;
       ListNode *t1=head, *t2=reverse(after_mid);
       int maxi=INT_MIN;
       while(t1!=NULL && t2!=NULL){
           maxi=max(t1->val+t2->val,maxi);
           t1=t1->next;
           t2=t2->next;

       }
        return maxi;
    }
};