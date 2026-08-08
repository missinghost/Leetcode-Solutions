/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    ListNode*curr=head;
    ListNode*nxt=head;
    while(nxt!=NULL && (nxt->next)!=NULL){
    curr=curr->next;
    nxt=(nxt->next)->next;
    if(curr==nxt){
    return true;
    }
    }   
return false;
    }
};