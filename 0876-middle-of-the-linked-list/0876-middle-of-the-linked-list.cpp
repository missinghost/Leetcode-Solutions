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
    ListNode* middleNode(ListNode* head) {
    int num=0;
    ListNode* temp=head;
    while(temp!=NULL){
    num+=1;
    temp=temp->next;
    }
    int num2=num/2;
    ListNode*temp2=head;
    for(int i=0;i<num2;i++){
    temp2=temp2->next;
    }
    return temp2;
    }
};