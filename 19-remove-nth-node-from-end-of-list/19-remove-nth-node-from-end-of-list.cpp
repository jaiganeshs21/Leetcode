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
       
        ListNode *temp=head;
        int cnt=0;
        while(temp){
            ++cnt;
            temp=temp->next;
        }
        
        //first node
        if(cnt==n){
            head=head->next;
            return head;
        }
        
        temp=head;
        for(int i=0;i<cnt-n-1;++i){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};